#include "Matrix4.h"

MathClasses::Matrix4::Matrix4() {
	this->m1 = 0.0f; // M 00
	this->m2 = 0.0f; // M 01
	this->m3 = 0.0f; // M 02
	this->m4 = 0.0f; // M 10
	this->m5 = 0.0f; // M 11
	this->m6 = 0.0f; // M 12
	this->m7 = 0.0f; // M 20
	this->m8 = 0.0f; // M 21
	this->m9 = 0.0f; // M 22
	this->m10 = 0.0f;
	this->m11 = 0.0f;
	this->m12 = 0.0f;
	this->m13 = 0.0f;
	this->m14 = 0.0f;
	this->m15 = 0.0f;
	this->m16 = 0.0f;
}

MathClasses::Matrix4::Matrix4(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16) {
	this->m1 = a1;
	this->m2 = a2;
	this->m3 = a3;
	this->m4 = a4;
	this->m5 = a5;
	this->m6 = a6;
	this->m7 = a7;
	this->m8 = a8;
	this->m9 = a9;
	this->m10 = a10;
	this->m11 = a11;
	this->m12 = a12;
	this->m13 = a13;
	this->m14 = a14;
	this->m15 = a15;
	this->m16 = a16;
}

MathClasses::Matrix4::Matrix4(float* v) {
	this->m1 = v[0];
	this->m2 = v[1];
	this->m3 = v[2];
	this->m4 = v[3];
	this->m5 = v[4];
	this->m6 = v[5];
	this->m7 = v[6];
	this->m8 = v[7];
	this->m9 = v[8];
	this->m10 = v[9];
	this->m11 = v[10];
	this->m12 = v[11];
	this->m13 = v[12];
	this->m14 = v[13];
	this->m15 = v[14];
	this->m16 = v[15];
}

std::string MathClasses::Matrix4::ToString() const
{
	std::string mat4ToStr;
	mat4ToStr = m1 + ', ' + m2 + ', ' + m3 + ', ' + m4 + ', ' + m5 + ', ' + m6 + ', ' + m7 + ', ' + m8 + ', ' +
		m9 + ', ' + m10 + ', ' + m11 + ', ' + m12 + ', ' + m13 + ', ' + m14 + ', ' + m15 + ', ' + m16;
	return mat4ToStr;
}


MathClasses::Matrix4 MathClasses::Matrix4::MakeIdentity()
{
	return Matrix4(
		1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f
	);
}

