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

Vec2f::~Vec2f(){}


// Vectors 3 Dimensions

Vec3f::Vec3f(float x, float y, float z){
	m_x = x;
	m_y = y;
	m_z = z; 
}

Vec3f::Vec3f(){
	m_x = 0;
	m_y = 0;
	m_z = 0; 
}

Vec3f::~Vec3f(){}


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

Vec4f::~Vec4f(){}
