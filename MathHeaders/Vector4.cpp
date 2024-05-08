#include "Vector4.h"

MathClasses::Vector4::Vector4()
{
	x = 0;
	y = 0;
	z = 0;
	w = 0;
}

MathClasses::Vector4::Vector4(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

std::string MathClasses::Vector4::ToString() const
{
	std::string vec4ToStr;
	vec4ToStr = x + ' ' + y + ' ' + z + ' ' + w;
}