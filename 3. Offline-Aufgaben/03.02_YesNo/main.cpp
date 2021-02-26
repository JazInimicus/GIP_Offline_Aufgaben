#include <iostream>

int main()
{
	char input;

	std::cout << "Bitte geben Sie das Zeichen ein: "; std::cin >> input;

	if (input == 'j' || input == 'J')
	{
		std::cout << "Es handelt sich um eine Ja Eingabe." << std::endl;
	}

	else if (input == 'n' || input == 'N')
	{
		std::cout << "Es handelt sich um eine Nein Eingabe." << std::endl;
	}

	else 
	{
		std::cout << "Es handelt sich um eine sonstige Eingabe." << std::endl;
	}

	system("PAUSE");
	return 0;
}