#include <iostream>
#include "../vector/Vector.hpp"
#include "../matrix/Matrix.hpp"

int main(void){

	Mat2 m = Mat2(1);
	Mat3 m1 = Mat3(2);
	Mat4 m2 = Mat4(3);

	std::cout << "Matrix 2X2\n";
	printMatrix(m);

	std::cout << "Matrix 3X3\n";
	printMatrix(m1);


	std::cout << "Matrix 4X4\n";
	printMatrix(m2);
}
