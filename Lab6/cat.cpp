//
// Created by George Cook on 20/02/2021.
//

#include <iostream>
#include "cat.h"
using namespace std;

Cat::Cat(){
	name = "Tom";
	lives = 9;
	dead = false;
	cout << "Default constructor called...\n";
}

Cat::Cat(string enterName){
	name = enterName;
	lives = 9;
	dead = false;
    	cout << "Constructor with the name...\n";
}

Cat::Cat(string enterName, unsigned int enterLives){
	name = enterName;
	lives = enterLives;
	dead = false;
    	cout << "Constructor with the name and lives...\n";
}

Cat::~Cat(){
	cout << "Deconstructor called...\n";
}

string const Cat::get_name(void)const{
	return name;
}

unsigned int const Cat::get_lives(void)const{
	return lives;
}

void Cat::set_name(string enterName){
	if(!dead){
		name = enterName;
		cout << "set_name called...\n";
	}else{
		cout << "set_name called...\n";
	}
}

void Cat::set_lives(unsigned int enterLives){
	if(lives <= enterLives){
		cout << "set_lives called...\n";
	}
	if((enterLives == 0) && (!dead)){
		lives = 0;
		set_name("The Cat formerly known as " + get_name());
		dead = true;
		cout << "set_lives called...\n";
	}
	if((enterLives < lives) && (lives != 0)){
		lives = enterLives;
		cout << "set_lives called...\n";
	}
}

std::ostream &operator<<(std::ostream &os, const Cat& cat){
	std::string catString = cat.get_name() + " has " + std::to_string(cat.get_lives()) + " lives";
	os << catString;
	return os;
}

bool operator==(const Cat& lhs, const Cat& rhs){
	if((lhs.get_name() == rhs.get_name()) && (lhs.get_lives() == rhs.get_lives())){
		return true;
	}
	else{
		return false;
	}
}

bool operator<(const Cat &lhs, const Cat &rhs){
	if(lhs.get_name() < rhs.get_name()){
		return true;
	}
	if(lhs.get_name() == rhs.get_name()){
		if(lhs.get_lives() < rhs.get_lives()){
			return true;
		}
	}
	else{
		return false;
	}
	return false;

}
