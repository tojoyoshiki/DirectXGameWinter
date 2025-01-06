#include "MathUtility.h"

using namespace KamataEngine;

const Vector3 operator+(const Vector3& v1, const Vector3& v2) {

	Vector3 temp(v1);
	return temp += v2;
}
Vector3& operator+=(Vector3& a, const Vector3& b) {

	a.x += b.x;
	a.y += b.y;
	a.z += b.z;

	return a;
}

const Vector3 operator-(const Vector3& v1, const Vector3& v2) {

	Vector3 temp(v1);

	return temp -= v2;
}
//Vector3の減算
Vector3& operator-=(Vector3& a, const Vector3& b) {

	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;

	return a;
}

const Vector3 operator*(const Vector3& v, float scalar) {
	return Vector3(v.x * scalar, v.y * scalar, v.z * scalar);
}

