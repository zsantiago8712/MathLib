#include "Matrix.hpp"


Mat2::Mat2(){
	m_val[0] = 1.0f;
	m_val[3] = 1.0f;
}


Mat2::Mat2(float num){
	for(auto& i: m_val)
		i = num;
}

Mat2::Mat2(const float val[4]){

	for(unsigned i = 0; i < 4; i++)
		m_val[i] = val[i];
}


Mat2::Mat2(const float x, const float y, const float x2, const float y2){
	m_val[0] = x;
	m_val[1] = y;
	m_val[2] = x2;
	m_val[3] = y2;
}
Mat2::~Mat2(){};



// Matrix 3X3

Mat3::Mat3(){
	m_val[0] = 1.0f;
	m_val[4] = 1.0f;
	m_val[8] = 1.0f;
}

Mat3::Mat3(float num){
	for(auto& i: m_val)
		i = num;
}

Mat3::~Mat3(){}


// Matrix 4X4

Mat4::Mat4(){
	m_val[0] = 1.0f;
	m_val[5] = 1.0f;
	m_val[10] = 1.0f;
	m_val[15] = 1.0f;
}


Mat4::Mat4(float num){
	for(auto& i: m_val)
		i = num;
}

Mat4::~Mat4(){}
 
