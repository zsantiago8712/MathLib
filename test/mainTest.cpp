#include <iostream>
#include "../vector/Vector.hpp"

int main(void){

	Vec2f v2 = Vec2f(2, 3);
	Vec2f v22 = Vec2f(1, 1);
	Vec2f v24 = Vec2f(1, 1);

	printVn(v2);
	printVn(v22);
	printVn(v24);
	
	Vec2f v25 = v2 - v22;
	Vec2f v23 = v2 + v22 - v24;
	Vec2f v26 = v2 * v24; 
	printVn(v23);
	printVn(v25);
	printVn(v26);
}
