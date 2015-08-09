// $Id: swap.cpp 9358 2014-04-25 15:36:21Z FloSoft $
//
// Copyright (c) 2005 - 2015 Settlers Freaks (sf-team at siedler25.org)
//
// This file is part of Return To The Roots.
//
// Return To The Roots is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Return To The Roots is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Return To The Roots. If not, see <http://www.gnu.org/licenses/>.

///////////////////////////////////////////////////////////////////////////////
// Header
#include "main.h"
#include "libendian.h"

///////////////////////////////////////////////////////////////////////////////
/**
 *  Swaps the bytes of a short.
 *
 *  @param[in] s short to swap
 *
 *  @return swapped short
 *
 *  @author FloSoft
 */
short libendian::swap_s(short s)
{
    return swap_us((unsigned short)s);
}

///////////////////////////////////////////////////////////////////////////////
/**
 *  Swaps the bytes of an unsigned short.
 *
 *  @param[in] us unsigned short to swap
 *
 *  @return swapped unsigned short
 *
 *  @author FloSoft
 */
unsigned short libendian::swap_us(unsigned short us)
{
    static unsigned short z = 0;
    unsigned char* zz = (unsigned char*)&z;
    unsigned char* ss = (unsigned char*)&us;

    zz[0] = ss[1];
    zz[1] = ss[0];

    return z;
}

///////////////////////////////////////////////////////////////////////////////
/**
 *  Swaps the bytes of an int.
 *
 *  @param[in] i int to swap
 *
 *  @return swapped int
 *
 *  @author FloSoft
 */
int libendian::swap_i(int i)
{
    return swap_ui((unsigned int)i);
}

///////////////////////////////////////////////////////////////////////////////
/**
 *  Swaps the bytes of an unsigned int.
 *
 *  @param[in] ui unsigned int to swap
 *
 *  @return swapped unsigned int
 *
 *  @author FloSoft
 */
unsigned int libendian::swap_ui(unsigned int ui)
{
    static unsigned int z = 0;
    unsigned char* zz = (unsigned char*)&z;
    unsigned char* ss = (unsigned char*)&ui;

    zz[3] = ss[0];
    zz[2] = ss[1];
    zz[1] = ss[2];
    zz[0] = ss[3];

    return z;
}
