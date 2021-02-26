#include <iostream>

int main()
{
	int input = 0, gleich = 0, ungleich = 0, zahl = 1;

	while (zahl <= 4)
	{
		std::cout << "Bitte geben Sie die " << zahl++ << ". Zahl ein: "; std::cin >> input;

		if (input == 99) { gleich++; }
		else { ungleich++; }
	}

	std::cout << gleich << " Eingabezahlen waren gleich der Vergleichszahl 99." << std::endl;
	std::cout << ungleich << " Eingabezahlen waren gleich der Vergleichszahl 99." << std::endl;

	system("PAUSE");
	return 0;
}