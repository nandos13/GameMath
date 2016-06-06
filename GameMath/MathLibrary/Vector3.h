#pragma once
#include "Matrix2.h"
#include "Matrix3.h"
class Vector3
{
public:
	float m_x, m_y, m_z;

	Vector3();
	Vector3(float x, float y, float z);
	~Vector3();

	Vector3 operator=(const Vector3& vecA);
	const bool operator==(const Vector3& vecA);
	Vector3 operator*(const float f);
	Vector3 operator/(const float f);
	Vector3 operator+(const Vector3& rhs);
	Vector3 operator-(const Vector3& rhs);
	//ADD MATRIX FUNCTIONS HERE
	Vector3 operator*(const Matrix2& rhs);
	Vector3 operator*(const Matrix3& rhs);
	
	float dot(const Vector3& vecA);
	Vector3 cross(const Vector3& vecA);
	float magnitude();
	void normalise();
	operator float*();
};

Vector3 operator*(const float& lhs, Vector3& rhs);
Vector3 operator*(const Matrix2& lhs, const Vector3& rhs);
Vector3 operator*(const Matrix3& lhs, const Vector3& rhs);