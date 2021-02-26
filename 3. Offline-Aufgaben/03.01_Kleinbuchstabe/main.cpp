#include <iostream>

int main()
{
	char input;

	std::cout << "Bitte geben Sie das Zeichen ein: "; std::cin >> input;

	if (input >= 97 && input <= 122)
	{
		std::cout << "Es wurd ein Kleinbuchstabe (a-z) eingegeben." << std::endl;
	}

	else
	{
		std::cout << "KEIN Kleinbuchstabe (a-z)." << std::endl;
	}

	system("PAUSE");
	return 0;
}