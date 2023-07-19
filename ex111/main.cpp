#include "Zombie.h"


Zombie* zombieHOrde(int N, std::string name)
{
	Zombie* zombie_s;
	for(int i = 0; i < N; i++)
	{
		zombie_s = new Zombie(name);
	}
	return (zombie_s);
}

int main()
{

}