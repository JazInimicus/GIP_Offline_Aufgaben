#include <iostream>

int main()
{
	char letter;

	std::cout << "Bitte geben Sie den Kleinbuchstaben ein: "; std::cin >> letter;
	std::cout << "Der entsprechende Grossbuchstabe lautet: " << char(int(letter) - 32) << std::endl;

	system("PAUSE");
	return 0;
}