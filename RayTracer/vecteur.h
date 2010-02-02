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
#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include <math.h>
using namespace std;

class Matrice;
/**
	@author Jeremy LEMESLE <jeremy.lemesle@u-psud.fr>
*/
class Vecteur {
friend class Matrice;
friend class Point;

public:
    Vecteur(float x, float y, float z, float t) : x(x), y(y), z(z), t(t) {};
    ~Vecteur() {};

    // produit scalaire
    const float operator * (const Vecteur &v) const {
    	return x*v.x + y*v.y + z*v.z;
    }

	const Vecteur operator * (const float i) const {
    	return Vecteur(x*i, y*i, z*i, 0);
    }


    // produit vectoriel
    const Vecteur operator ^ (const Vecteur &v) const {
    	return Vecteur(y*v.z-z*v.y, z*v.x-x*v.z, x*v.y-y*v.x, 0);
    }

    const Vecteur operator + (const Vecteur &v) const {
    	return Vecteur(x+v.x, y+v.y, z+v.z, 0);
    }

    const Vecteur operator - (const Vecteur &v) const {
    	return Vecteur(x-v.x, y-v.y, z-v.z, 0);
    }

    friend ostream& operator << (ostream &os, const Vecteur &v) {
		os << "[" << v.x << ", " << v.y << ", " << v.z << ", " << v.t << "]";
		return os;
    }

	void translation(Vecteur v);
	void homotethie(Vecteur v);
	//en radiant
	void rotationX(float angle);
	void rotationY(float angle);
	void rotationZ(float angle);
private:
    float x, y, z, t;
};

#include "matrice.h"
#endif
