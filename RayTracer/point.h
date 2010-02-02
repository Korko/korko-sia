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

#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;


class Vecteur;
class Matrice;

/**
	@author Jeremy LEMESLE <jeremy.lemesle@u-psud.fr>
*/
class Point{
friend class Matrice;
public:
	Point(float x, float y, float z, float t)  : x(x), y(y), z(z), t(t) {};
	~Point();

	friend ostream& operator << (ostream &os, const Point &p) {
		os << "[" << p.x << ", " << p.y << ", " << p.z << ", " << p.t << "]";
		return os;
	}

	void translation(Vecteur v);

	//en radiant
	void rotationX(float angle);
	void rotationY(float angle);
	void rotationZ(float angle);

	float getX(){return x;}
	float getY(){return y;}
	float getZ(){return z;}
private:
	float x, y, z, t;
};

#include "matrice.h"
#include "vecteur.h"
#endif
