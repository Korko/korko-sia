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
#ifndef MATRICE_H
#define MATRICE_H

/**
	@author Jeremy LEMESLE <jeremy.lemesle@u-psud.fr>
*/

#include <iostream>
#include <cstdlib>
#include "vecteur.h"
#include "point.h"
using namespace std;

class Vecteur;
class Point;

class Matrice{
public:
    Matrice();
    Matrice(const Matrice &m2);
    Matrice(float a00, float a01, float a02, float a03, 
	    float a10, float a11, float a12, float a13, 
	    float a20, float a21, float a22, float a23, 
	    float a30, float a31, float a32, float a33);
    ~Matrice() {};

    // transposed
    friend const Matrice t(const Matrice m) {
		Matrice m2;
	
		for(int i=0; i<4; i++) {
			for(int j=0; j<4; j++) {
				m2.valeurs[i][j] = m.valeurs[j][i];
			}
		}
	
		return m2;
    }

    friend ostream& operator << (ostream &os, const Matrice &m) {
		for(int i=0; i<4; i++) {
			os << "| " << m.valeurs[i][0] << " | "
				<< m.valeurs[i][1] << " | " 
				<< m.valeurs[i][2] << " | " 
				<< m.valeurs[i][3] << " |" << endl;
		}
	
		return os;
    }

    const Matrice operator * (const Matrice m2) const {
		Matrice m1 = *(this);
		float a00 = m1.valeurs[0][0]*m2.valeurs[0][0]+
			m1.valeurs[0][1]*m2.valeurs[1][0]+
			m1.valeurs[0][2]*m2.valeurs[2][0]+
			m1.valeurs[0][3]*m2.valeurs[3][0];
	
		float a01 = m1.valeurs[0][0]*m2.valeurs[0][1]+
			m1.valeurs[0][1]*m2.valeurs[1][1]+
			m1.valeurs[0][2]*m2.valeurs[2][1]+
			m1.valeurs[0][3]*m2.valeurs[3][1];
	
		float a02 = m1.valeurs[0][0]*m2.valeurs[0][2]+
			m1.valeurs[0][1]*m2.valeurs[1][2]+
			m1.valeurs[0][2]*m2.valeurs[2][2]+
			m1.valeurs[0][3]*m2.valeurs[3][2];
	
		float a03 = m1.valeurs[0][0]*m2.valeurs[0][3]+
			m1.valeurs[0][1]*m2.valeurs[1][3]+
			m1.valeurs[0][2]*m2.valeurs[2][3]+
			m1.valeurs[0][3]*m2.valeurs[3][3];
	
		float a10 = m1.valeurs[1][0]*m2.valeurs[0][0]+
			m1.valeurs[1][1]*m2.valeurs[1][0]+
			m1.valeurs[1][2]*m2.valeurs[2][0]+
			m1.valeurs[1][3]*m2.valeurs[3][0];
	
		float a11 = m1.valeurs[1][0]*m2.valeurs[0][1]+
			m1.valeurs[1][1]*m2.valeurs[1][1]+
			m1.valeurs[1][2]*m2.valeurs[2][1]+
			m1.valeurs[1][3]*m2.valeurs[3][1];
	
		float a12 = m1.valeurs[1][0]*m2.valeurs[0][2]+
			m1.valeurs[1][1]*m2.valeurs[1][2]+
			m1.valeurs[1][2]*m2.valeurs[2][2]+
			m1.valeurs[1][3]*m2.valeurs[3][2];
	
		float a13 = m1.valeurs[1][0]*m2.valeurs[0][3]+
			m1.valeurs[1][1]*m2.valeurs[1][3]+
			m1.valeurs[1][2]*m2.valeurs[2][3]+
			m1.valeurs[1][3]*m2.valeurs[3][3];
	
		float a20 = m1.valeurs[2][0]*m2.valeurs[0][0]+
			m1.valeurs[2][1]*m2.valeurs[1][0]+
			m1.valeurs[2][2]*m2.valeurs[2][0]+
			m1.valeurs[2][3]*m2.valeurs[3][0];
	
		float a21 = m1.valeurs[2][0]*m2.valeurs[0][1]+
			m1.valeurs[2][1]*m2.valeurs[1][1]+
			m1.valeurs[2][2]*m2.valeurs[2][1]+
			m1.valeurs[2][3]*m2.valeurs[3][1];
	
		float a22 = m1.valeurs[2][0]*m2.valeurs[0][2]+
			m1.valeurs[2][1]*m2.valeurs[1][2]+
			m1.valeurs[2][2]*m2.valeurs[2][2]+
			m1.valeurs[2][3]*m2.valeurs[3][2];
	
		float a23 = m1.valeurs[2][0]*m2.valeurs[0][3]+
			m1.valeurs[2][1]*m2.valeurs[1][3]+
			m1.valeurs[2][2]*m2.valeurs[2][3]+
			m1.valeurs[2][3]*m2.valeurs[3][3];
	
		float a30 = m1.valeurs[3][0]*m2.valeurs[0][0]+
			m1.valeurs[3][1]*m2.valeurs[1][0]+
			m1.valeurs[3][2]*m2.valeurs[2][0]+
			m1.valeurs[3][3]*m2.valeurs[3][0];
	
		float a31 = m1.valeurs[3][0]*m2.valeurs[0][1]+
			m1.valeurs[3][1]*m2.valeurs[1][1]+
			m1.valeurs[3][2]*m2.valeurs[2][1]+
			m1.valeurs[3][3]*m2.valeurs[3][1];
	
		float a32 = m1.valeurs[3][0]*m2.valeurs[0][2]+
			m1.valeurs[3][1]*m2.valeurs[1][2]+
			m1.valeurs[3][2]*m2.valeurs[2][2]+
			m1.valeurs[3][3]*m2.valeurs[3][2];
	
		float a33 = m1.valeurs[3][0]*m2.valeurs[0][3]+
			m1.valeurs[3][1]*m2.valeurs[1][3]+
			m1.valeurs[3][2]*m2.valeurs[2][3]+
			m1.valeurs[3][3]*m2.valeurs[3][3];
	
		return Matrice(a00, a01, a02, a03, a10, a11, a12, a13, a20, a21, a22, a23, a30, a31, a32, a33);
    }

	Vecteur* operator * (const Vecteur* v2) const{
		
		float x = valeurs[0][0]*v2->x+valeurs[0][1]*v2->y+valeurs[0][2]*v2->z+valeurs[0][3]*v2->t;
		float y = valeurs[1][0]*v2->x+valeurs[1][1]*v2->y+valeurs[1][2]*v2->z+valeurs[1][3]*v2->t;
		float z = valeurs[2][0]*v2->x+valeurs[2][1]*v2->y+valeurs[2][2]*v2->z+valeurs[2][3]*v2->t;
		float t = valeurs[3][0]*v2->x+valeurs[3][1]*v2->y+valeurs[3][2]*v2->z+valeurs[3][3]*v2->t;

		return new Vecteur(x, y, z, t);
	}

	Point* operator * (const Point* p) const{
		
		float x = valeurs[0][0]*p->x+valeurs[0][1]*p->y+valeurs[0][2]*p->z+valeurs[0][3]*p->t;
		float y = valeurs[1][0]*p->x+valeurs[1][1]*p->y+valeurs[1][2]*p->z+valeurs[1][3]*p->t;
		float z = valeurs[2][0]*p->x+valeurs[2][1]*p->y+valeurs[2][2]*p->z+valeurs[2][3]*p->t;
		float t = valeurs[3][0]*p->x+valeurs[3][1]*p->y+valeurs[3][2]*p->z+valeurs[3][3]*p->t;

		return new Point(x, y, z, t);
	}
private:
    float valeurs[4][4];
};


#endif
