/***************************************************************************
 *   Copyright (C) 2010 by Jeremy LEMESLE, Benjamin PLISSON				   *
 *   jeremy.lemesle@u-psud.fr, benjamin.plisson@u-psud.fr				   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "matrice.h"

Matrice::Matrice()
{
	Matrice(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
}

Matrice::Matrice(const Matrice &m2)
{
	memcpy(valeurs, m2.valeurs, 4*4*sizeof(float));
}

Matrice::Matrice(float a00, float a01, float a02, float a03, 
	    	 float a10, float a11, float a12, float a13, 
	    	 float a20, float a21, float a22, float a23, 
	    	 float a30, float a31, float a32, float a33)
{
	valeurs[0][0] = a00; valeurs[0][1] = a01; valeurs[0][2] = a02; valeurs[0][3] = a03;
	valeurs[1][0] = a10; valeurs[1][1] = a11; valeurs[1][2] = a12; valeurs[1][3] = a13;
	valeurs[2][0] = a20; valeurs[2][1] = a21; valeurs[2][2] = a22; valeurs[2][3] = a23;
	valeurs[3][0] = a30; valeurs[3][1] = a31; valeurs[3][2] = a32; valeurs[3][3] = a33;
}

