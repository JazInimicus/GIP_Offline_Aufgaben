#include <iostream>

int main()
{
	int input, big, smol;

	std::cout << "Bitte geben Sie die 1. Zahl ein: "; std::cin >> input;
	
	big = input; smol = input;

	std::cout << "Bitte geben Sie die 2. Zahl ein: "; std::cin >> input;
	if (input > big) { big = input; }
	else if (input < smol) { smol = input; }

	std::cout << "Bitte geben Sie die 3. Zahl ein: "; std::cin >> input;
	if (input > big) { big = input; }
	else if (input < smol) { smol = input; }

	std::cout << "Die kleinste eingegebene Zahl lautet: " << smol << std::endl;
	std::cout << "Die groesste eingegebene Zahl lautet: " << big << std::endl;

	system("PAUSE");
	return 0;
}