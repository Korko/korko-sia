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
#include "vecteur.h"

void Vecteur::translation(const Vecteur v) {
	Matrice m=Matrice(1.f,0.f,0.f,v.x, 0.f,1.f,0.f,v.y, 0.f,0.f,1.f,v.z, 0.f,0.f,0.f,1.f);
	Vecteur* v2 = m*this;
	x = v2->x;
	y = v2->y;
	z = v2->z;
	t = v2->t;
	free(v2);
}

void Vecteur::homotethie(Vecteur v){
	Matrice m = Matrice(v.x, 0.f, 0.f, 0.f,   0.f, v.y, 0.f, 0.f,     0.f, 0.f, v.z, 0.f,     0.f, 0.f, 0.f, 1.f);

	Vecteur* v2 = m*this;
	x = v2->x;
	y = v2->y;
	z = v2->z;
	t = v2->t;
	free(v2);
}

void Vecteur::rotationX(float angle){
	Matrice m(1.f, 0.f, 0.f, 0.f,   0.f, cos(angle), -sin(angle), 0.f,     0.f, sin(angle), cos(angle), 0.f,     0.f, 0.f, 0.f, 1.f);

	Vecteur* v2 = m*this;
	x = v2->x;
	y = v2->y;
	z = v2->z;
	t = v2->t;
	free(v2);
}

void Vecteur::rotationY(float angle){
	Matrice m(cos(angle), 0.f, sin(angle), 0.f,   0.f, 1.f, 0.f, 0.f,     -sin(angle), 0.f, cos(angle), 0.f,     0.f, 0.f, 0.f, 1.f);

	Vecteur* v2 = m*this;
	x = v2->x;
	y = v2->y;
	z = v2->z;
	t = v2->t;
	free(v2);
}

void Vecteur::rotationZ(float angle){
	Matrice m(cos(angle), -sin(angle), 0.f, 0.f,  sin(angle), cos(angle), 0.f, 0.f,   0.f, 0.f,1.f, 0.f,     0.f, 0.f, 0.f, 1.f);

	Vecteur* v2 = m*this;
	x = v2->x;
	y = v2->y;
	z = v2->z;
	t = v2->t;
	free(v2);
}
