/* Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef _LOGAUDIT__H
#define _LOGAUDIT__H

#include <sys/types.h>

#include "decoders/decoder.h"

/* Time structures */
extern int today;
extern int thishour;
extern int prev_year;
extern char prev_month[4];

extern int __crt_hour;
extern int __crt_wday;

extern time_t c_time; /* Current time of event. Used everywhere */

/* Local host name */
extern char __shost[512];

extern OSDecoderInfo *NULL_Decoder;

void * syscom_main(__attribute__((unused)) void * arg) ;
size_t syscom_dispatch(char *command, char *output);
size_t syscom_getconfig(const char * section, char *output);

#define OSSEC_SERVER    "ossec-server"
#define MAX_DECODER_ORDER_SIZE  1024

#endif /* _LOGAUDIT__H */
