#include "Matrix3.h"

MathClasses::Matrix3::Matrix3() {
	this->m1 = 0.0f; // M 00
	this->m2 = 0.0f; // M 01
	this->m3 = 0.0f; // M 02
	this->m4 = 0.0f; // M 10
	this->m5 = 0.0f; // M 11
	this->m6 = 0.0f; // M 12
	this->m7 = 0.0f; // M 20
	this->m8 = 0.0f; // M 21
	this->m9 = 0.0f; // M 22
}

MathClasses::Matrix3::Matrix3(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9) {
	this->m1 = a1;
	this->m2 = a2;
	this->m3 = a3;
	this->m4 = a4;
	this->m5 = a5;
	this->m6 = a6;
	this->m7 = a7;
	this->m8 = a8;
	this->m9 = a9;
}

MathClasses::Matrix3::Matrix3(float* v) {
	
}

std::string MathClasses::Matrix3::ToString() const {
	std::string mat3ToStr;
	mat3ToStr = m1 + ' ' + m2 + ' ' + m3 + '\n' + m4 + ' ' + m5 + ' ' + m6 + '\n' + m7 + ' ' + m8 + ' ' + m9;
	return mat3ToStr;
}

MathClasses::Matrix3 MathClasses::Matrix3::MakeIdentity() {
	Matrix3 identityMatrix;
	identityMatrix.m1 = 1; identityMatrix.m5 = 1; identityMatrix.m9 = 1;
	identityMatrix.m2 = 0; identityMatrix.m3 = 0; identityMatrix.m4 = 0; identityMatrix.m6 = 0; identityMatrix.m7 = 0; identityMatrix.m8 = 0;
	return identityMatrix;
}

MathClasses::Matrix3 MathClasses::Matrix3::MakeTranslation(float x, float y, float z) {
	

}


