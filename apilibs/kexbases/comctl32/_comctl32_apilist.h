/*
 *  KernelEx
 *  Copyright (C) 2010, Xeno86, Tihiy
 *
 *  This file is part of KernelEx source code.
 *
 *  KernelEx is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation; version 2 of the License.
 *
 *  KernelEx is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _COMCTL32_APILIST_H
#define _COMCTL32_APILIST_H

#include <commctrl.h>
#include "kexcoresdk.h"

BOOL init_comctl32();
extern const apilib_api_table apitable_comctl32;

/*** AUTOGENERATED APILIST DECLARATIONS BEGIN ***/
BOOL WINAPI InitCommonControlsEx_new(LPINITCOMMONCONTROLSEX lpInitCtrls);
/*** AUTOGENERATED APILIST DECLARATIONS END ***/

#endif
