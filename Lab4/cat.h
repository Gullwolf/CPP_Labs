//
// Created by George Cook on 20/02/2021.
//

#ifndef TEST_CAT_H
#define TEST_CAT_H
#include <string>
using namespace std;


class Cat {
private:
        string name;
        unsigned int lives;
	bool dead = false;

public:
	Cat();
    	Cat(string);
    	Cat(string, unsigned int);
    	~Cat();
    	string const get_name()const;
	unsigned int const get_lives()const;
	void set_name(string);
	void set_lives(unsigned int);


};


#endif //TEST_CAT_H
