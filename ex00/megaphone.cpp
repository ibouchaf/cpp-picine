#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char)toupper(av[i][j]);
		i++;
	}
}