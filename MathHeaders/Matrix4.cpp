#include "Matrix4.h"

MathClasses::Matrix4::Matrix4() {
	m1, m2, m3, m4, m5, m6, m7, m8, m9,	m10, m11, m12, m13, m14, m15, m16 = 0;
}

MathClasses::Matrix4::Matrix4(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16) {
	m1 = a1;
	m2 = a2;
	m3 = a3;
	m4 = a4;
	m5 = a5;
	m6 = a6;
	m7 = a7;
	m8 = a8;
	m9 = a9;
	m10 = a10;
	m11 = a11;
	m12 = a12;
	m13 = a13;
	m14 = a14;
	m15 = a15;
	m16 = a16;
}

MathClasses::Matrix4::Matrix4(float* v)
{
}

std::string MathClasses::Matrix4::ToString() const
{
	std::string mat4ToStr;
	mat4ToStr = m1 + ' ' + m2 + ' ' + m3 + ' ' + m4 + '\n' + m5 + ' ' + m6 + ' ' + m7 + ' ' + m8 + '\n' +
		m9 + ' ' + m10 + ' ' + m11 + ' ' + m12 + '\n' + m13 + ' ' + m14 + ' ' + m15 + ' ' + m16;
	return mat4ToStr;
}

