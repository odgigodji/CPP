//
// Created by Nelson Amerei on 7/1/21.
//

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie(const std::string& name);
	void announce( void );
	virtual ~Zombie();
//	static Zombie *newZombie( std::string name );

//setters and getters:
	const std::string &getName() const;
	void setName(const std::string &name);
};



#endif //EX00_ZOMBIE_HPP

