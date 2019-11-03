#include<iostream>
#include "R4DVector.h"

namespace R4DEngine
{
	R4DVector3n::R4DVector3n() :x(0.0), y(0.0), z(0.0) {};
	R4DVector3n::R4DVector3n(float uX, float uY, float uZ) :x(uX), y(uY), z(uZ) {}

	R4DVector3n::~R4DVector3n() {}

	R4DVector3n::R4DVector3n(const R4DVector3n& v):x(v.x),y(v.y),z(v.z){}

	R4DVector3n& R4DVector3n::operator=(const R4DVector3n& v) {

		x = v.x;
		y = v.y;
		z = v.z;
		return *this;
	}
}