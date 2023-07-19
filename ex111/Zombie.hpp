#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include  <iostream>


class Zombie
{
private:
	std::string name;
public:
	Zombie(const std::string& zombieName)
	{
		name = zombieName;
	}
	void announce ()
	{
		std::cout << name << ": BraiiiiiinnnzzzZ..."<< std::endl;
	}
	~Zombie()
	{
		std::cout << "Goodbye. You are destroying the objects. "<< std::endl;
	}
};

#endif