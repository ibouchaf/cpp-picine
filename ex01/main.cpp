#include <iostream>
#include <string>



class	Contact
{
	std::string FirstNAme;
	std::string	LastName;
	std::string	NickName;
	std::string	darkestSecret;
	int			PhoneNumber;
};

class PhoneBook
{
	Contact contacts[8];
	int numContact;

	public :

};

int main()
{
	std::string command;

	while (command != "EXIT")
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT) : ";
		std::cin >> command;

		if (command == "ADD")
		{

		}
		else if (command == "SEARCH")
		{

		}
		else if (command == "EXIT")
			std::cout << "Goodbye! :) "<< std::endl;
		else
			std::cout << "Invalid command! PLease try again!! " << std::endl;

	}
}