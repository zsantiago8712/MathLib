#include <iostream>
#include "../vector/Vector.hpp"
#include "../matrix/Matrix.hpp"

int main(void){

	Mat2 m = Mat2(1);
	Mat2 m3 = Mat2(2);

	Mat3 m13 = Mat3(2);
	Mat3 m1 = Mat3(1);

	Mat4 m2 = Mat4(3);
	Mat4 m22 = Mat4(2);

	std::cout << "Matrix 2X2\n";
	printMatrix(m);
	printMatrix(m3);

	std::cout << "Matrix 3X3\n";
	printMatrix(m1);


	std::cout << "Matrix 4X4\n";
	printMatrix(m2);

	std::cout << "Matrix2x2 * Matrix2x2\n";
	Mat2 r = m * m3;
	printMatrix(r);


	std::cout << "Matrix2x2 *= Matrix2x2\n";
	m *= m3;
	printMatrix(m);



	std::cout << "Matrix3x3 * Matrix3x3\n";
	Mat3 m33 = m1 * m13;
	printMatrix(m33);

	std::cout << "Matrix3x3 *= Matrix3x3\n";
	m1*=m13;
	printMatrix(m1);

	std::cout << "Matrix4x4 * Matrix4x4\n";
	Mat4 m0 = m2 * m22;
	printMatrix(m0);

	std::cout << "Matrix4x4 *= Matrix4x4\n";
	m2*=m22;
	printMatrix(m2);



}
