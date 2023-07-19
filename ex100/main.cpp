#include "Zombie.h"



Zombie* newZombie(std ::string name)
{
	Zombie* zombiePtr =new Zombie(name);
	return (zombiePtr);
}

void	randomChump(std::string name)
{
	Zombie zombieIss(name);

	zombieIss.announce();
}

int main()
{
	Zombie zombie("Foo");
	zombie.announce();

	Zombie* zombiePtr = newZombie("ALLAL");
	zombiePtr->announce();

	randomChump("ISSAM");
	delete(zombiePtr);

}