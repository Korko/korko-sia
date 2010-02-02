/***************************************************************************
 *   Copyright (C) 2010 by Jérémy LEMESLE <jeremy.lemesle@korko.fr>        *
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

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <iostream>
#include <cstdlib>

#include "point.h"
#include "vecteur.h"
#include "matrice.h"

int main(int argc, char *argv[])
{
    Vecteur v1(1,2,3,0);
    Vecteur v2(1,1,1,1);

    Vecteur v3 = v1+v2;
    Vecteur v4 = v1-v2;
    Vecteur v5 = v1^v2;
    float f1 = v1*v2;

    cout << v1 << "+" << v2 << " => " << v3 << endl;
    cout << v1 << "-" << v2 << " => " << v4 << endl;
    cout << v1 << "^" << v2 << " => " << v5 << endl;
    cout << v1 << "." << v2 << " => " << f1 << endl;

    Matrice m(1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16);
    cout << m << endl << t(m);
    return EXIT_SUCCESS;
}
