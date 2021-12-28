#include <iostream>
#include "Shape.h"

int main(int argc , char *argv[]) {

	Shape **xs = new Shape*[3];
	xs[0] = new Circle(0, 0, 1);
	xs[1] = new Rectangle(0, 1, 1, 0);
	xs[2] = new Triangle(0, 0, 1, 1, 0, 1);

	int i = 0;
	for(i = 0; i < 3; ++i){
		std::cout << xs[i]->to_string() << std::endl;
	}

	for(i = 0; i < 3; ++i){
		xs[i]->centre_at(10, 10);
	}

	for(i = 0; i < 3; ++i){
		std::cout << xs[i]->to_string() << std::endl;
	}

	for(i = 0; i < 3; ++i){
		delete xs[i];
	}

	//x->centre_at(-2.5, 2.5);

	//std::cout << x->to_string() << std::endl;

    //delete x;
    return 0;
}
