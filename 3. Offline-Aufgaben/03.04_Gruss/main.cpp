#include <iostream>

int main()
{
	int input;

	std::cout << "Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: "; std::cin >> input;

	if (input == 23 || input >= 0 && input <= 5)
	{
		std::cout << "Gute Nacht." << std::endl;
	}

	else if (input >= 6 && input <= 10)
	{
		std::cout << "Guten Morgen." << std::endl;
	}

	else if (input >= 11 && input <= 13)
	{
		std::cout << "Mahlzeit." << std::endl;
	}

	else if (input >= 14 && input <= 17)
	{
		std::cout << "Guten Tag." << std::endl;
	}

	else if (input >= 18 && input <= 22)
	{
		std::cout << "Guten Abend." << std::endl;
	}

	else
	{
		std::cout << "Keine erlaubte Stundenangabe." << std::endl;
	}

	system("PAUSE");
	return 0;
}