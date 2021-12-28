#include <iostream>
#include "cat.h"
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]){

	float numberOfInputs = (float) (argc - 1);
	float numberOfCats;
	int i = 0;
	int j = 1;

	numberOfCats = ceil(numberOfInputs/2);
	cout << "Allocating clowder of size " << numberOfCats << ".\n";
	Cat *clowder = new Cat[(int) numberOfCats];

	for(i = 0; i < numberOfCats; ++i){
		if(j + 1 < (argc - 1)){
			stringstream strValue;
			strValue << argv[j + 1];
			unsigned int numberOfLives;
			strValue >> numberOfLives;
			Cat a(argv[j], numberOfLives);
			clowder[i] = move(a);
		}else{
			Cat a(argv[j]);
			clowder[i] = move(a);
		}
		j = j + 2;
	}

	for(i = 0; i < numberOfCats; ++i){
		cout << clowder[i].get_name() << " has "
			<< clowder[i].get_lives() << " lives.\n";
	}
	
	for(i = 0; i < numberOfCats; ++i){
		clowder[i].~Cat();
	}

	return 0;
}
