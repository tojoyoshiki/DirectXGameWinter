#pragma once
#include "math/Vector3.h"
#include <cmath>

KamataEngine::Vector3& operator+=(KamataEngine::Vector3& a, const KamataEngine::Vector3& b);
KamataEngine::Vector3& operator-=(KamataEngine::Vector3& a, const KamataEngine::Vector3& b);


const KamataEngine::Vector3 operator+(const KamataEngine::Vector3& v1, const KamataEngine::Vector3& v2);
const KamataEngine::Vector3 operator-(const KamataEngine::Vector3& v1, const KamataEngine::Vector3& v2);
const KamataEngine::Vector3 operator*(const KamataEngine::Vector3& v, float scalar);
