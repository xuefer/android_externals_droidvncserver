/*
droid vnc server - Android VNC server
Copyright (C) 2009 Jose Pereira <onaips@gmail.com>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _GRALLOC_H
#define _GRALLOC_H

#include "screenFormat.h"

int initGralloc(void);
#ifdef DVNC_STATIC_WRAPPER
#include "gralloc/gralloc.h"
static inline void closeGralloc(void) { close_gralloc(); }
static inline unsigned char *readBufferGralloc(void) { return readfb_gralloc(); }
static inline screenFormat getScreenFormatGralloc(void) { return getscreenformat_gralloc(); }
#else
void closeGralloc(void);
unsigned char *readBufferGralloc(void);
screenFormat getScreenFormatGralloc(void);
#endif
#endif
