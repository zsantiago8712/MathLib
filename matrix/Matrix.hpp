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

	
		Mat2 operator*(const Mat2& m1) const{
			
			float res[4];
			
			res[0] = m_val[0] * m1.m_val[0] + m_val[1] * m1.m_val[2];
			res[1] = m_val[0] * m1.m_val[1] + m_val[1] * m1.m_val[3];
			res[2] = m_val[2] * m1.m_val[0] + m_val[3] * m1.m_val[2];
			res[3] = m_val[2] * m1.m_val[1] + m_val[3] * m1.m_val[3];
				
			return Mat2(res);
		}


		void operator *=(const Mat2& m1){
	
			float temp0, temp1, temp3;
			temp0 = m_val[0] * m1.m_val[0] + m_val[1] * m1.m_val[2];
			temp1 = m_val[0] * m1.m_val[1] + m_val[1] * m1.m_val[3];
			temp3 = m_val[2] * m1.m_val[0] + m_val[3] * m1.m_val[2];
			m_val[3] = m_val[2] * m1.m_val[1] + m_val[3] * m1.m_val[3];

			m_val[0] = temp0;
			m_val[1] = temp1;
			m_val[2] = temp3;
		}

		void operator =(const Mat2& m1){
			for(unsigned int i = 0; i < 4; i++)
				m_val[i] = m1.m_val[i];
		}

};


class Mat3
{
	public:
		float m_val[9] = {0.0f};
		Mat3();
		Mat3(const float num);
		Mat3(const float val[9]);
		Mat3(const float x1, const float y1, const float z1, 
				const  float x2, const  float y2, const  float z2,
				const  float x3, const  float y3, const  float z3);
		~Mat3();

	public:
		Mat3 operator+(const Mat3& m)const{
			return Mat3(m_val[0] + m.m_val[0], m_val[1] + m.m_val[1], m_val[2] + m.m_val[2],
			m_val[3] + m.m_val[3], m_val[4] + m.m_val[4], m_val[5] + m.m_val[5], 
			m_val[6] + m.m_val[6], m_val[7] + m.m_val[7], m_val[8] + m.m_val[8]);
		}

		void operator += (const Mat3& m){
			
			for (unsigned int i = 0; i < 9; i++)
				m_val[i] += m.m_val[i];
		}
		
		Mat3 operator-(const Mat3& m)const{
			return Mat3(m_val[0] - m.m_val[0], m_val[1] - m.m_val[1], m_val[2] - m.m_val[2],
			m_val[3] - m.m_val[3], m_val[4] - m.m_val[4], m_val[5] - m.m_val[5], 
			m_val[6] - m.m_val[6], m_val[7] - m.m_val[7], m_val[8] - m.m_val[8]);
		}

		void operator -= (const Mat3& m){
			
			for (unsigned int i = 0; i < 9; i++)
				m_val[i] -= m.m_val[i];
		}


		/**
		* 1 2 3  1 2 3
		* 1 2 3  1 2 3
		* 1 2 3  1 2 3
		**/

		Mat3 operator * (const Mat3& m)const {
			float r[9];
			r[0] = m_val[0] * m.m_val[0] + m_val[1] * m.m_val[3] + m_val[2] * m.m_val[6];
			r[1] = m_val[0] * m.m_val[1] + m_val[1] * m.m_val[5] + m_val[2] * m.m_val[7];
			r[2] = m_val[0] * m.m_val[2] + m_val[1] * m.m_val[7] + m_val[2] * m.m_val[8];
			
			r[3] = m_val[3] * m.m_val[0] + m_val[4] * m.m_val[3] + m_val[5] * m.m_val[6];
			r[4] = m_val[3] * m.m_val[1] + m_val[4] * m.m_val[5] + m_val[5] * m.m_val[7];
			r[5] = m_val[3] * m.m_val[2] + m_val[4] * m.m_val[7] + m_val[5] * m.m_val[8];
			
			r[6] = m_val[6] * m.m_val[0] + m_val[7] * m.m_val[3] + m_val[8] * m.m_val[6];
			r[7] = m_val[6] * m.m_val[1] + m_val[7] * m.m_val[5] + m_val[8] * m.m_val[7];
			r[8] = m_val[6] * m.m_val[2] + m_val[7] * m.m_val[7] + m_val[8] * m.m_val[8];
				
			return Mat3(r);
		}

		

		void operator *= (const Mat3& m){
			float r[9];

			r[0] = m_val[0] * m.m_val[0] + m_val[1] * m.m_val[3] + m_val[2] * m.m_val[6];
			r[1] = m_val[0] * m.m_val[1] + m_val[1] * m.m_val[5] + m_val[2] * m.m_val[7];
			r[2] = m_val[0] * m.m_val[2] + m_val[1] * m.m_val[7] + m_val[2] * m.m_val[8];
			
			r[3] = m_val[3] * m.m_val[0] + m_val[4] * m.m_val[3] + m_val[5] * m.m_val[6];
			r[4] = m_val[3] * m.m_val[1] + m_val[4] * m.m_val[5] + m_val[5] * m.m_val[7];
			r[5] = m_val[3] * m.m_val[2] + m_val[4] * m.m_val[7] + m_val[5] * m.m_val[8];
			
			r[6] = m_val[6] * m.m_val[0] + m_val[7] * m.m_val[3] + m_val[8] * m.m_val[6];
			r[7] = m_val[6] * m.m_val[1] + m_val[7] * m.m_val[5] + m_val[8] * m.m_val[7];
			r[8] = m_val[6] * m.m_val[2] + m_val[7] * m.m_val[7] + m_val[8] * m.m_val[8];
			

			for (unsigned int i = 0; i < 9; i++)
				m_val[i] = r[i];
		}
			
		void operator = (const Mat3& m){
			for(unsigned int i = 0; i < 9; i++)
				m_val[i] = m.m_val[i];
		}	
};


class Mat4
{

	public:
		float m_val[16] = {0.0f};
		Mat4();
		Mat4(const float num);
		Mat4(const float values[16]);
		Mat4(const float x1, const float y1, const float z1, const float w1, 
			const float x2, const  float y2, const float z2, const float w2,
			const float x3, const float y3, const float z3, const float w3,
			const float x4, const float y4, const float z4, const float w4);


		Mat4 operator+(const Mat4& m)const{
			return Mat4(m_val[0] + m.m_val[0], m_val[1] + m.m_val[1], m_val[2] + m.m_val[2], m_val[3] + m.m_val[3],
					m_val[4] + m.m_val[4], m_val[5] + m.m_val[5], m_val[6] + m.m_val[6], m_val[7] + m.m_val[7], 
					m_val[8] + m.m_val[8], m_val[9] + m.m_val[9], m_val[10] + m.m_val[10], m_val[11] + m.m_val[11],
					m_val[12] + m.m_val[12], m_val[13] + m.m_val[13], m_val[14] + m.m_val[14], m_val[15] + m.m_val[15]
					);
		}

		void operator+=(const Mat4& m){
			for(unsigned int i = 0; i < 16; i++)
				m_val[i] += m.m_val[i];
		}


		Mat4 operator-(const Mat4& m)const{
			return Mat4(m_val[0] - m.m_val[0], m_val[1] - m.m_val[1], m_val[2] - m.m_val[2], m_val[3] - m.m_val[3],
					m_val[4] - m.m_val[4], m_val[5] - m.m_val[5], m_val[6] - m.m_val[6], m_val[7] - m.m_val[7], 
					m_val[8] - m.m_val[8], m_val[9] - m.m_val[9], m_val[10] - m.m_val[10], m_val[11] - m.m_val[11],
					m_val[12] - m.m_val[12], m_val[13] - m.m_val[13], m_val[14] - m.m_val[14], m_val[15] - m.m_val[15]
					);
		}


		void operator-=(const Mat4& m){
			for(unsigned int i = 0; i < 16; i++)
				m_val[i] -= m.m_val[i];
		}




		Mat4 operator*(const Mat4& m)const{
	
			float r[16];
			r[0] = m_val[0] * m.m_val[0] + m_val[1] * m.m_val[4] + m_val[2] * m.m_val[8] + m_val[3] * m.m_val[12];
			r[1] = m_val[0] * m.m_val[1] + m_val[1] * m.m_val[5] + m_val[2] * m.m_val[9] + m_val[3] * m.m_val[13];
			r[2] = m_val[0] * m.m_val[2] + m_val[1] * m.m_val[6] + m_val[2] * m.m_val[10] + m_val[3] * m.m_val[14];
			r[3] = m_val[0] * m.m_val[3] + m_val[1] * m.m_val[7] + m_val[2] * m.m_val[11] + m_val[3] * m.m_val[15];


			r[4] = m_val[4] * m.m_val[0] + m_val[5] * m.m_val[4] + m_val[6] * m.m_val[8] + m_val[7] * m.m_val[12];
			r[5] = m_val[4] * m.m_val[1] + m_val[5] * m.m_val[5] + m_val[6] * m.m_val[9] + m_val[7] * m.m_val[13];
			r[6] = m_val[4] * m.m_val[2] + m_val[5] * m.m_val[6] + m_val[6] * m.m_val[10] + m_val[7] * m.m_val[14];
			r[7] = m_val[4] * m.m_val[3] + m_val[5] * m.m_val[7] + m_val[6] * m.m_val[11] + m_val[7] * m.m_val[15];

			r[8] = m_val[8] * m.m_val[0] + m_val[9] * m.m_val[4] + m_val[10] * m.m_val[8] + m_val[11] * m.m_val[12];
			r[9] = m_val[8] * m.m_val[1] + m_val[9] * m.m_val[5] + m_val[10] * m.m_val[9] + m_val[11] * m.m_val[13];
			r[10] = m_val[8] * m.m_val[2] + m_val[9] * m.m_val[6] + m_val[10] * m.m_val[10] + m_val[11] * m.m_val[14];
			r[11] = m_val[8] * m.m_val[3] + m_val[9] * m.m_val[7] + m_val[10] * m.m_val[11] + m_val[11] * m.m_val[15];

			r[12] = m_val[12] * m.m_val[0] + m_val[13] * m.m_val[4] + m_val[14] * m.m_val[8] + m_val[15] * m.m_val[12];
			r[13] = m_val[12] * m.m_val[1] + m_val[13] * m.m_val[5] + m_val[14] * m.m_val[9] + m_val[15] * m.m_val[13];
			r[14] = m_val[12] * m.m_val[2] + m_val[13] * m.m_val[6] + m_val[14] * m.m_val[10] + m_val[15] * m.m_val[14];
			r[15] = m_val[12] * m.m_val[3] + m_val[13] * m.m_val[7] + m_val[14] * m.m_val[11] + m_val[15] * m.m_val[15];

			return Mat4(r);
		}


		void operator*=(const Mat4& m){
			float r[16];
			r[0] = m_val[0] * m.m_val[0] + m_val[1] * m.m_val[4] + m_val[2] * m.m_val[8] + m_val[3] * m.m_val[12];
			r[1] = m_val[0] * m.m_val[1] + m_val[1] * m.m_val[5] + m_val[2] * m.m_val[9] + m_val[3] * m.m_val[13];
			r[2] = m_val[0] * m.m_val[2] + m_val[1] * m.m_val[6] + m_val[2] * m.m_val[10] + m_val[3] * m.m_val[14];
			r[3] = m_val[0] * m.m_val[3] + m_val[1] * m.m_val[7] + m_val[2] * m.m_val[11] + m_val[3] * m.m_val[15];


			r[4] = m_val[4] * m.m_val[0] + m_val[5] * m.m_val[4] + m_val[6] * m.m_val[8] + m_val[7] * m.m_val[12];
			r[5] = m_val[4] * m.m_val[1] + m_val[5] * m.m_val[5] + m_val[6] * m.m_val[9] + m_val[7] * m.m_val[13];
			r[6] = m_val[4] * m.m_val[2] + m_val[5] * m.m_val[6] + m_val[6] * m.m_val[10] + m_val[7] * m.m_val[14];
			r[7] = m_val[4] * m.m_val[3] + m_val[5] * m.m_val[7] + m_val[6] * m.m_val[11] + m_val[7] * m.m_val[15];

			r[8] = m_val[8] * m.m_val[0] + m_val[9] * m.m_val[4] + m_val[10] * m.m_val[8] + m_val[11] * m.m_val[12];
			r[9] = m_val[8] * m.m_val[1] + m_val[9] * m.m_val[5] + m_val[10] * m.m_val[9] + m_val[11] * m.m_val[13];
			r[10] = m_val[8] * m.m_val[2] + m_val[9] * m.m_val[6] + m_val[10] * m.m_val[10] + m_val[11] * m.m_val[14];
			r[11] = m_val[8] * m.m_val[3] + m_val[9] * m.m_val[7] + m_val[10] * m.m_val[11] + m_val[11] * m.m_val[15];

			r[12] = m_val[12] * m.m_val[0] + m_val[13] * m.m_val[4] + m_val[14] * m.m_val[8] + m_val[15] * m.m_val[12];
			r[13] = m_val[12] * m.m_val[1] + m_val[13] * m.m_val[5] + m_val[14] * m.m_val[9] + m_val[15] * m.m_val[13];
			r[14] = m_val[12] * m.m_val[2] + m_val[13] * m.m_val[6] + m_val[14] * m.m_val[10] + m_val[15] * m.m_val[14];
			r[15] = m_val[12] * m.m_val[3] + m_val[13] * m.m_val[7] + m_val[14] * m.m_val[11] + m_val[15] * m.m_val[15];

			for(unsigned int i = 0; i < 16; i++)
				m_val[i] = r[i];
		}

		void operator=(const Mat4& m){
			for(unsigned int i = 0; i < 16; i++)
				m_val[i] = m.m_val[i];
		}

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

