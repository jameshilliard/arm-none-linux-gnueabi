#ifndef _ZFTAPE_H
#define _ZFTAPE_H

/*
 * Copyright (C) 1996, 1997 Claus-Justus Heine.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; see the file COPYING.  If not, write to
 the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

 *
 * $Source: /homes/cvs/ftape-stacked/include/linux/zftape.h,v $
 * $Revision: 1.12 $
 * $Date: 1997/10/21 11:02:37 $
 *
 *      Special ioctl and other global info for the zftape VFS
 *      interface for the QIC-40/80/3010/3020 floppy-tape driver for
 *      Linux.
 */

#define ZFTAPE_VERSION  "zftape for " FTAPE_VERSION

#include <linux/ftape.h>

#define ZFTAPE_LABEL       "Ftape - The Linux Floppy Tape Project!"

/* Bits of the minor device number that control the operation mode */
#define ZFT_Q80_MODE		(1 << 3)
#define ZFT_ZIP_MODE		(1 << 4)
#define ZFT_RAW_MODE		(1 << 5)
#define ZFT_MINOR_OP_MASK	(ZFT_Q80_MODE	| 	\
				 ZFT_ZIP_MODE	| 	\
				 ZFT_RAW_MODE)
#define ZFT_MINOR_MASK		(FTAPE_SEL_MASK		|	\
				 ZFT_MINOR_OP_MASK	|	\
				 FTAPE_NO_REWIND)

#ifdef ZFT_OBSOLETE
struct mtblksz {
	unsigned int mt_blksz;
};
#define MTIOC_ZFTAPE_GETBLKSZ _IOR('m', 104, struct mtblksz)
#endif


#endif
