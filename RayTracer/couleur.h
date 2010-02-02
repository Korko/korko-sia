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
#ifndef COULEUR_H
#define COULEUR_H

#include <iostream>

using namespace std;

/**
        @author Jeremy LEMESLE, Benjamin PLISSON <jeremy.lemesle@u-psud.fr, benjamin.plisson@u-psud.fr>
 */
class Couleur {
public:
    Couleur(float r, float v, float b)  : r(r), v(v), b(b) {};
    ~Couleur() {};

    friend ostream & operator <<(ostream &os, const Couleur &p) {
        os << "[" << "r: " << p.r << ", v: " << p.v << ", b: " << p.b << "]";
        return os;
    }

    Couleur operator +(const Couleur &c) {
        float r = (r+c.r > 1) ? 1 : r+c.r;
        float v = (v+c.v > 1) ? 1 : v+c.v;
        float b = (b+c.b > 1) ? 1 : b+c.b;

        return Couleur(r, v, b);
    }
private:
    float r, v, b;
};

#endif
