#include <iostream>

int main()
{
	int h1, m1, s1, h2, m2, s2;

	std::cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: "; std::cin >> h1;
	std::cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: "; std::cin >> m1;
	std::cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: "; std::cin >> s1;
	std::cout << h1 << ":" << m1 << " Uhr und " << s1 << " Sekunden sind in Sekunden seit Mitternacht: " << (h1 * 3600) + (m1 * 60) + s1 << std::endl;

	std::cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: "; std::cin >> h2;
	std::cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: "; std::cin >> m2;
	std::cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: "; std::cin >> s2;
	std::cout << h2 << ":" << m2 << " Uhr und " << s2 << " Sekunden sind in Sekunden seit Mitternacht: " << (h2 * 3600) + (m2 * 60) + s2 << std::endl;

	std::cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt: " << std::endl;
	std::cout << h2 - h1 << " Stunden, " << m2 - m1 << " Minuten und " << s2 - s1 << " Sekunden." << std::endl;

	system("PAUSE");
	return 0;
}