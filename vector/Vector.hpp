#pragma once

#include <iostream>
#include <cmath>

class Vec2f
{
	public:
		float m_x, m_y;

		Vec2f();
		Vec2f(float x, float y);
		Vec2f(float num);
		~Vec2f();

	public:
	Vec2f operator+(const Vec2f& v2) const{
		return Vec2f(m_x + v2.m_x, m_y + v2.m_y);
	}

	void operator+=(const Vec2f& v2){
		m_x += v2.m_x;
		m_y += v2.m_y;
	}

	Vec2f operator-(const Vec2f& v2) const{
		return Vec2f(m_x - v2.m_x, m_y - v2.m_y);;
	}

	void operator-=(const Vec2f& v2){
		m_x -= v2.m_x;
		m_y -= v2.m_y;
	}


	Vec2f operator*(const Vec2f& v2) const{
		return Vec2f(m_x * v2.m_x, m_y * v2.m_y);;
	}

	void operator*=(const Vec2f& v2){
		m_x *= v2.m_x;
		m_y *= v2.m_y;
	}

	void operator*=(const float num){
		m_x *= num;
		m_y *= num;
	}

	float magnitud() const;
	float dotProduct(const Vec2f& v1) const;
	void norm();
	Vec2f projection(const Vec2f& v1) const;
};



class Vec3f
{
	public:
		float m_x, m_y, m_z;

		Vec3f();
		Vec3f(float num);
		Vec3f(float x, float y, float z);
		~Vec3f();

	public:

		Vec3f operator+(const Vec3f& v2) const{ 
			return Vec3f(m_x + v2.m_x, m_y + v2.m_y, m_z + v2.m_z);
		}

		void operator+=(const Vec3f& v2){
			m_x += v2.m_x;
			m_y += v2.m_y;
			m_z += v2.m_z;
		}

		Vec3f operator-(const Vec3f& v2) const{
			return Vec3f(m_x - v2.m_x, m_y - v2.m_y, m_z - v2.m_z);
		}

		void operator-=(const Vec3f& v2){
			m_x -= v2.m_x;
			m_y -= v2.m_y;
			m_z -= v2.m_z;
		}


		Vec3f operator*(const Vec3f& v2) const{
			return Vec3f(m_x * v2.m_x, m_y * v2.m_y, m_z * v2.m_z);
		}

		void operator*=(const Vec3f& v2){
			m_x *= v2.m_x;
			m_y *= v2.m_y;
			m_z *= v2.m_z;
		}

	float magnitud() const;
	float dotProduct(const Vec3f& v1) const;
	Vec3f crossProduct(const Vec3f& v1) const;
	void norm();
	Vec3f projection(const Vec3f& v1) const;
};



class Vec4f{
	public:
		float m_x, m_y, m_z, m_w;

		Vec4f();
		Vec4f(float num);
		Vec4f(float x, float y, float z, float w);
		~Vec4f();

	public:
	Vec4f operator+(const Vec4f& v2) const{
		return Vec4f(m_x + v2.m_x, m_y + v2.m_y, m_z + v2.m_z, m_w + v2.m_w);
	}
	
	void operator+=(const Vec4f& v2){
		m_x += v2.m_x;
		m_y += v2.m_y;
		m_z += v2.m_z;
		m_w += v2.m_w;
	}


	Vec4f operator-(const Vec4f& v2) const{
		return Vec4f(m_x - v2.m_x, m_y - v2.m_y, m_z - v2.m_z, m_w - v2.m_w);
	}

	void operator-=(const Vec4f& v2){
		m_x -= v2.m_x;
		m_y -= v2.m_y;
		m_z -= v2.m_z;
		m_w -= v2.m_w;
	}

	Vec4f operator*(const Vec4f& v2) const{
		return Vec4f(m_x * v2.m_x, m_y * v2.m_y, m_z * v2.m_z, m_w * v2.m_w);
	}

	void operator*=(const Vec4f& v2){
		m_x *= v2.m_x;
		m_y *= v2.m_y;
		m_z *= v2.m_z;
		m_w *= v2.m_w;
	}

	float magnitud() const;
	float dotProduct(const Vec4f& v1) const;
	void norm();
	Vec4f projection(const Vec4f& v1) const;
};


template <class Vecn>
inline void printVn(const Vecn& vecn){
	assert(false);
}


template<>
inline void printVn<Vec2f>(const Vec2f& v2){
	std::cout << '[' << v2.m_x << ", " << v2.m_y << "]\n"; 
}


template<>
inline void printVn<Vec3f>(const Vec3f& v3){
	std::cout << '[' << v3.m_x << ", " << v3.m_y << ", " << v3.m_z  << "]\n"; 
}

template<>
inline void printVn<Vec4f>(const Vec4f& v4){
	std::cout << '[' << v4.m_x << ", " << v4.m_y << ", " << v4.m_z  << ", " << v4.m_w << "]\n"; 
}
