//-------------------------------------------------------------------------
/*
Copyright (C) 1996, 2003 - 3D Realms Entertainment

This file is NOT part of Duke Nukem 3D version 1.5 - Atomic Edition
However, it is either an older version of a file that is, or is
some test code written during the development of Duke Nukem 3D.
This file is provided purely for educational interest.

Duke Nukem 3D is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Prepared for public release: 03/21/2003 - Charlie Wiederhold, 3D Realms
*/
//-------------------------------------------------------------------------

#ifndef _wad2type_public
#define _wad2type_public
#ifdef __cplusplus
extern "C" {
#endif

//
// ID WAD2 Format
//

#define WAD2_LUMP_NAME_SIZE 16
#define WAD2EXTENSION "wad"

#define ID2_STRING   "WAD2"
//===============
//   TYPES
//===============

typedef struct
   {
   char    name[ WAD2_LUMP_NAME_SIZE ];
   int16   handle;
   int16   lumptype;
   uint32  position;
   uint32  size;
   } lumpinfo2_t;

typedef struct
   {
   char    identification[ 4 ]; // should be ID_STRING
   uint32  numlumps;
   uint32  infotableofs;
   } wad2info_t;

typedef struct
   {
   uint32  filepos;
   uint32  dsize;
   uint32  size;
   byte    lumptype;
   byte    compress;
   short   dummy;
   char    name[ WAD2_LUMP_NAME_SIZE ];
   } filelump2_t;

#ifdef __cplusplus
};
#endif
#endif
