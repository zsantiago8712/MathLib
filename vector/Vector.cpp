#include "Vector.hpp"
#include <iterator>
#include <ostream>

Vec2f::Vec2f(float x, float y){
	m_x = x;
	m_y = y;
}


Vec2f::Vec2f(){
	m_x = 0;
	m_y = 0;
}

Vec2f::Vec2f(float num){
	m_x = num;
	m_y = num;
}


Vec2f::~Vec2f(){}
float Vec2f::magnitud() const { return sqrtf(powf(m_x, 2) + powf(m_y, 2)); }
float Vec2f::dotProduct(const Vec2f& v2) const { return m_x + v2.m_x + m_y + v2.m_y; }

void Vec2f::norm(){
	
	float mag = 1.0f/this->magnitud();
	
	m_x *= mag;
	m_y *= mag;

}

Vec2f Vec2f::projection(const Vec2f &v1) const{
	
	float div = (this->dotProduct(v1)/v1.dotProduct(v1));
	return Vec2f(m_x * div, m_y * div);
}


// Vectors 3 Dimensions
Vec3f::Vec3f(float x, float y, float z){
	m_x = x;
	m_y = y;
	m_z = z; 
}

Vec3f::Vec3f(float num){
	m_x = num;
	m_y = num;
	m_z = num;
}


Vec3f::Vec3f(){
	m_x = 0;
	m_y = 0;
	m_z = 0; 
}

Vec3f::~Vec3f(){}

float Vec3f::magnitud() const { return sqrtf(powf(m_x, 2) + powf(m_y, 2) + powf(m_z, 2)); }
float Vec3f::dotProduct(const Vec3f& v1) const{ return m_x + v1.m_x + m_y + v1.m_y + m_z + v1.m_z; }
Vec3f Vec3f::crossProduct(const Vec3f& v1) const{ return Vec3f(m_x - v1.m_x, (-1) * (m_y - v1.m_y), m_z - v1.m_z); }
void Vec3f::norm(){
	
	float mag = 1.0f/this->magnitud();
	
	m_x *= mag;
	m_y *= mag;
	m_z *= mag;

}


Vec3f Vec3f::projection(const Vec3f &v1) const{
	
	float div = (this->dotProduct(v1)/v1.dotProduct(v1));
	return Vec3f(m_x * div, m_y * div, m_z * div);
}
// Vectors 4 Dimensions

Vec4f::Vec4f(float x, float y, float z, float w){
	m_x = x;
	m_y = y;
	m_z = z;
	m_w = w;
}

Vec4f::Vec4f(){
	m_x = 0;
	m_y = 0;
	m_z = 0;
	m_w = 0;
}

Vec4f::Vec4f(float num){
	m_x = num;
	m_y = num;
	m_z = num;
	m_w = num;
}

Vec4f::~Vec4f(){}

float Vec4f::magnitud() const{ return sqrtf(powf(m_x, 2) + powf(m_y, 2) + powf(m_z, 2) + powf(m_w, 2)); }
float Vec4f::dotProduct(const Vec4f& v1) const{ return m_x + v1.m_x + m_y + v1.m_y + m_z + v1.m_z + m_w + v1.m_w; }
void Vec4f::norm(){
	
	float mag = 1.0f/this->magnitud();
	
	m_x *= mag;
	m_y *= mag;
	m_z *= mag;
	m_w *= mag;
}


Vec4f Vec4f::projection(const Vec4f &v1) const{
	
	float div = (this->dotProduct(v1)/v1.dotProduct(v1));
	return Vec4f(m_x * div, m_y * div, m_z * div, m_w * div);
}
