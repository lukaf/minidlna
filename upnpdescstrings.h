/* miniupnp project
 * http://miniupnp.free.fr/ or http://miniupnp.tuxfamily.org/
 *
 * Copyright (c) 2006, Thomas Bernard
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * The name of the author may not be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __UPNPDESCSTRINGS_H__
#define __UPNPDESCSTRINGS_H__

#include "config.h"

/* strings used in the root device xml description */
#ifdef NETGEAR
 #define ROOTDEV_MANUFACTURERURL	"http://www.netgear.com/"
 #define ROOTDEV_MANUFACTURER		"NETGEAR"
 #define ROOTDEV_MODELNAME		"Windows Media Connect compatible (ReadyDLNA)"
 #define ROOTDEV_MODELURL		OS_URL
 #ifdef READYNAS
  #define ROOTDEV_MODELDESCRIPTION	"ReadyDLNA on ReadyNAS RAIDiator OS"
 #else
  #define ROOTDEV_MODELDESCRIPTION	"ReadyDLNA"
 #endif
#else
 #define ROOTDEV_MANUFACTURERURL	OS_URL
 #define ROOTDEV_MANUFACTURER		"Justin Maggard"
 #define ROOTDEV_MODELNAME		"Windows Media Connect compatible (MiniDLNA)"
 #define ROOTDEV_MODELDESCRIPTION	"MiniDLNA on " OS_NAME
 #define ROOTDEV_MODELURL		OS_URL
#endif

#endif
