#include <iostream>
#include "../vector/Vector.hpp"

int main(void){

	Vec2f v2 = Vec2f(2, 0);
	Vec2f v1 = Vec2f(1.0f);
	printVn(v2);
	printVn(v1);

	std::cout << "Magnitud: " << v2.magnitud() << std::endl;
	v2.norm();
	printVn(v2);
}
