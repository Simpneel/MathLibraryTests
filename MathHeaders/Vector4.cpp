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
	return vec4ToStr;
}

float MathClasses::Vector4::Magnitude() const
{
	float mag = sqrt((x * x) + (y * y) + (z * z) + (w * w));
	return mag;
}

float MathClasses::Vector4::Dot(Vector4 o) const
{
	float dotProduct = (x * o.x) + (y * o.y) + (z * o.z) + (w * o.w);
	return dotProduct;
}

MathClasses::Vector4 MathClasses::Vector4::Normalised() const
{
	Vector4 newVec;
	newVec = newVec + *this;
	newVec.Normalise();
	return newVec;
}

void MathClasses::Vector4::Normalise()
{
	float mag = this->Magnitude();
	if (mag > 0) {
		this->x = this->x / mag;
		this->y = this->y / mag;
		this->z = this->z / mag;
		this->w = this->w / mag;
	}
}

MathClasses::Vector4 MathClasses::Vector4::Cross(Vector4 o) const
{
	Vector4 newVec;
	newVec.w = o.w;
	newVec.x = ((y * o.z) - (z * o.y));
	newVec.y = ((z * o.x) - (x * o.z));
	newVec.z = ((x * o.y) - (y * o.x));
	return newVec;
}

MathClasses::Vector4 MathClasses::operator+(Vector4 a, Vector4 b)
{
	Vector4 newVec;
	newVec.x = a.x + b.x;
	newVec.y = a.y + b.y;
	newVec.z = a.z + b.z;
	newVec.w = a.w + b.w;
	return newVec;
}

MathClasses::Vector4 MathClasses::operator-(Vector4 a, Vector4 b)
{
	Vector4 newVec;
	newVec.x = a.x - b.x;
	newVec.y = a.y - b.y;
	newVec.z = a.z - b.z;
	newVec.w = a.w - b.w;
	return newVec;
}

MathClasses::Vector4 MathClasses::operator*(Vector4 a, float b)
{
	Vector4 newVec;
	newVec.x = a.x * b;
	newVec.y = a.y * b;
	newVec.z = a.z * b;
	newVec.w = a.w * b;
	return newVec;
}

MathClasses::Vector4 MathClasses::operator*(float a, Vector4 b)
{
	Vector4 newVec;
	newVec.x = a * b.x;
	newVec.y = a * b.y;
	newVec.z = a * b.z;
	newVec.w = a * b.w;
	return newVec;
}

bool MathClasses::operator==(Vector4 a, Vector4 b)
{
	if ((a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w) && (a.x / b.x) == (a.y / b.y) == (a.z / b.z) == (a.w / b.w)) {
		return true;
	}
	else {
		return false;
	}
}

bool MathClasses::operator!=(Vector4 a, Vector4 b)
{
	if (!((a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w) && (a.x / b.x) == (a.y / b.y) == (a.z / b.z) == (a.w / b.w))) {
		return true;
	}
	else {
		return false;
	}
}


