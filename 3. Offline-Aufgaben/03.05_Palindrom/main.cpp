#include <iostream>
#include <string>

int main()
{
	std::string input;

	std::cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: "; std::getline(std::cin, input);

	if (input[0, 1, 2] == input[5, 4, 3])
	{
		std::cout << "Das eingegebene Wort ist ein Palindrom." << std::endl;
	}

	else
	{
		std::cout << "Das eingegebene Wort ist KEIN Palindrom." << std::endl;
	}

	system("PAUSE");
	return 0;
}