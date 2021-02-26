#include <iostream>

int main()
{
	char input;

	std::cout << "Bitte geben Sie das Zeichen ein: "; std::cin >> input;

	if (input == 'e')
	{
		std::cout << "Das Programm beendet sich jetzt." << std::endl;
	}

	else if (input >= 48 && input <= 57)
	{
		std::cout << input << " + 5 = " << char(int(input) + 5) << std::endl;
	}

	else
	{
		std::cout << "Weder 'e' noch Ziffer" << std::endl;
	}

	system("PAUSE");
	return 0;
}