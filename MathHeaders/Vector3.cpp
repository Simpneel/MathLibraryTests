#include "Vector3.h"
#include <cmath>

MathClasses::Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

MathClasses::Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

std::string MathClasses::Vector3::ToString() const
{
	std::string vec3ToStr;
	vec3ToStr = (x + ' ' + y + ' ' + z);
	return vec3ToStr;
}

float MathClasses::Vector3::Magnitude() const
{
	float magnitude = sqrt((x * x) + (y * y) + (z * z));
	return magnitude;
}

float MathClasses::Vector3::Dot(Vector3 o) const
{
	float dotProduct = (x * o.x) + (y * o.y) + (z * o.z);
	return dotProduct;
}

MathClasses::Vector3 MathClasses::Vector3::Normalised() const
{
	this->Normalised();
	return *this;
}

void MathClasses::Vector3::Normalise()
{
	float mag = this->Magnitude();
	if (mag > 0) {
		this->x /= mag;
		this->y /= mag;
		this->z /= mag;
	}
}

MathClasses::Vector3 MathClasses::Vector3::Cross(Vector3 o) const
{
	Vector3 newVec;
	newVec.x = ((y * o.z) - (z * o.y));
	newVec.y = ((z * o.x) - (x * o.z));
	newVec.z = ((x * o.y) - (y * o.x));
	return newVec;
}

MathClasses::Vector3 MathClasses::operator+(Vector3 a, Vector3 b)
{
	Vector3 newVec;
	newVec.x = a.x + b.x;
	newVec.y = a.y + b.y;
	newVec.z = a.z + b.z;
	return newVec;
}

MathClasses::Vector3 MathClasses::operator-(Vector3 a, Vector3 b)
{
	Vector3 newVec;
	newVec.x = a.x - b.x;
	newVec.y = a.y - b.y;
	newVec.z = a.z - b.z;
	return newVec;
}

MathClasses::Vector3 MathClasses::operator*(Vector3 a, float b)
{
	return Vector3();
}

MathClasses::Vector3 MathClasses::operator*(float a, Vector3 b)
{
	return Vector3();
}

bool MathClasses::operator==(Vector3 a, Vector3 b)
{
	if ((a.x == b.x && a.y == b.y && a.z == b.z) && (a.x / b.x) == (a.y / b.y) == (a.z / b.z)) {
		return true;
	}
	else {
		return false;
	}
}

bool MathClasses::operator!=(Vector3 a, Vector3 b)
{
	if (!((a.x == b.x && a.y == b.y && a.z == b.z) && (a.x / b.x) == (a.y / b.y) == (a.z / b.z))) {
		return true;
	}
	else {
		return false;
	}
}