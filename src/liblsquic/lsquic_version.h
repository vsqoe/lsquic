/* Copyright (c) 2017 - 2022 LiteSpeed Technologies Inc.  See LICENSE. */
/*
 * lsquic_version.h -- version manipulation routines
 */

#ifndef LSQUIC_VERSION_H
#define LSQUIC_VERSION_H 1

#include <stdint.h>

uint32_t
lsquic_ver2tag (unsigned version);

enum lsquic_version
lsquic_tag2ver (uint32_t ver_tag);

enum lsquic_version
lsquic_tag2ver_ietf (const unsigned char *tag);

enum lsquic_version
lsquic_tag2ver_fast (const unsigned char * tag);

extern const char *const lsquic_ver2str[];

int
lsquic_gen_ver_tags (unsigned char *buf, size_t bufsz, unsigned versions);

#endif
