#pragma once
#include <iostream>
#include <cmath>

class Mat2
{
	public:
		float m_val[4] = {0.0f};
		Mat2(); 
		Mat2(float num);
		Mat2(const float val[4]);
		Mat2(const float x, const float y, const float x2, const float y2);
		~Mat2();

	public:
		Mat2 operator+(const Mat2& m1) const{
			return Mat2(m_val[0] + m1.m_val[0], m_val[1] + m1.m_val[1], m_val[2] + m1.m_val[2], m_val[3] + m1.m_val[3]);
		}

		void operator +=(const Mat2& m1){
			for(unsigned int i = 0; i < 4; i++)
				m_val[i] += m1.m_val[i];
		}

		Mat2 operator-(const Mat2& m1) const{
			return Mat2(m_val[0] - m1.m_val[0], m_val[1] - m1.m_val[1], m_val[2] - m1.m_val[2], m_val[3] - m1.m_val[3]);
		}

		void operator -=(const Mat2& m1){
			for(unsigned int i = 0; i < 4; i++)
				m_val[i] -= m1.m_val[i];
		}

	/*
		Mat2 operator*(const Mat2& m1) const{
			return Mat2(m_val[0]+ m1.m_val[0], m_val[1]+ m1.m_val[1], m_val[2]+ m1.m_val[2], m_val[3]+ m1.m_val[3]);
		}

		void operator *=(const Mat2& m1){
			for(unsigned int i = 0; i < 4; i++)
				m_val[i] += m1.m_val[i];
		}
	*/
};


class Mat3
{
	public:
		float m_val[9] = {0.0f};
		Mat3();
		Mat3(float num);
		~Mat3();
};


class Mat4
{

	public:
		float m_val[16] = {0.0f};
		Mat4();
		Mat4(float num);
		~Mat4();
};



template<class Matrix>
inline void printMatrix(const Matrix& m){
	assert(false);
}

template<>
inline void printMatrix<Mat2>(const Mat2& m){
	
	for(unsigned int i = 0; i < 4; i++){
		if(i % 2 == 0)
			std::cout << '[' << m.m_val[i] << ", ";
		else
			std::cout << m.m_val[i] << ']' << std::endl;
	}
}

template<>
inline void printMatrix<Mat3>(const Mat3& m){
	
	for(unsigned int i = 0; i < 9; i++){
		if(i % 3 == 0)
			std::cout << '[' << m.m_val[i] << ", ";
		else if(i == 1 || i == 4 || i == 7)
			std::cout << m.m_val[i] << ", ";
		else
			std::cout << m.m_val[i] << "]" << std::endl;
	}

}

template<>
inline void printMatrix<Mat4>(const Mat4& m){
	
	for (unsigned i = 0; i < 16; i++) {
		if(i % 4 == 0)
			std::cout << '[' << m.m_val[i] << ", ";
		else if(i == 1 || i == 5 || i == 9 || i == 13)
			std::cout << m.m_val[i] << ", ";
		else if(i % 2 == 0)
			std::cout << m.m_val[i] << ", ";
		else
			std::cout << m.m_val[i] << "]" << std::endl;
	}
}

