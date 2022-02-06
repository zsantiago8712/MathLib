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

Mat3::Mat3(const float num){
	for(auto& i: m_val)
		i = num;
}

Mat3::Mat3(const float value[9]){
	for(unsigned int i = 0; i < 9; i++)
		m_val[i] = value[i];
		
}



Mat3::Mat3(const float x1, const float y1, const float z1, 
		const  float x2, const  float y2, const  float z2,
		const  float x3, const  float y3, const  float z3){

	m_val[0] = x1;
	m_val[1] = y1;
	m_val[2] = z1;
	m_val[3] = x2;
	m_val[4] = y2;
	m_val[5] = z2;
	m_val[6] = x3;
	m_val[7] = y3;
	m_val[8] = z3;

}

Mat3::~Mat3(){}


// Matrix 4X4

Mat4::Mat4(){
	m_val[0] = 1.0f;
	m_val[5] = 1.0f;
	m_val[10] = 1.0f;
	m_val[15] = 1.0f;
}


Mat4::Mat4(const float num){
	for(auto& i: m_val)
		i = num;
}

Mat4::Mat4(const float values[16]){

	for(unsigned int i = 0; i < 16; i++)
		m_val[i] = values[i];

}

Mat4::Mat4(const float x1, const float y1, const float z1, const float w1, 
		const float x2, const  float y2, const float z2, const float w2,
		const float x3, const float y3, const float z3, const float w3,
		const float x4, const float y4, const float z4, const float w4){

	m_val[0] = x1;
	m_val[1] = y1;
	m_val[2] = z1;
	m_val[3] = w1;
	m_val[4] = x2;
	m_val[5] = y2;
	m_val[6] = z2;
	m_val[7] = w2;
	m_val[8] = x3;
	m_val[9] = y3;
	m_val[10] = z3;
	m_val[11] = w3;
	m_val[12] = x4;
	m_val[13] = y4;
	m_val[14] = z4;
	m_val[15] = w4;

}

Mat4::~Mat4(){}
 
