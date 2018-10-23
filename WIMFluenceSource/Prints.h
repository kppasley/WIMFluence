/*
WIMFluence calculates shear and moment influence lines and the resulting shear and moment reactions based on weigh-in-motion data. Copyright � 2016-2018 Kenneth Pasley

This file is part of WIMFluence.

WIMFluence is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

WIMFluence is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with WIMFluence.  If not, see http://www.gnu.org/licenses.
*/

#ifndef PRINTS_H_INCLUDED
#define PRINTS_H_INCLUDED

#include "Structs.h"
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::setw;
using std::fixed;
using std::right;

void print_truck(truck& this_truck);

void print_truck2(truck& this_truck);

void print_extreme_set(extreme_set& extremes);

void print_bridge(bridge& this_bridge);

void print_matrix(vector< vector<float> >& matrix);
#endif // PRINTS_H_INCLUDED
