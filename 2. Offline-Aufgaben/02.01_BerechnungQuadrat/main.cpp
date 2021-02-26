#include <iostream>

int main()
{
	double data;

	std::cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ";
	std::cin >> data;

	std::cout << "Der Umfang des Quadrats betraegt (in cm): " << 4 * data << std::endl;
	std::cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << data * data << std::endl;

	system("PAUSE");
	return 0;
}