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
	friend std::ostream &operator<<(std::ostream &os, const Cat& cat);
	friend bool operator==(const Cat& lhs, const Cat& rhs);
	friend bool operator<(const Cat &lhs, const Cat &rhs);


};

namespace std{
	template <>
	struct hash <Cat> {
		size_t operator() (const Cat &obj) const {
			std::string computed_hash;
			std::string catString = obj.get_name() + "has" + to_string(obj.get_lives()) + "lives";

			return std::hash<std::string>()(catString);
		}
	};

}


#endif //TEST_CAT_H
