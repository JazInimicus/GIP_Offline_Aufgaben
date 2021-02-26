#include <iostream>

int main()
{
	double k1, k2, k3, gesamt; 

	std::cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: "; std::cin >> gesamt;
	std::cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: "; std::cin >> k1;
	std::cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: "; std::cin >> k2;
	
	k3 = gesamt - k1 - k2;

	std::cout << "Auf den dritten Kandidaten sind somit " << k3 << " Stimmen entfallen." << std::endl;

	std::cout << "Kandidat 1 enthielt " << k1 / gesamt * 100 << "% der Stimmen." << std::endl;
	std::cout << "Kandidat 2 enthielt " << k2 / gesamt * 100 << "% der Stimmen." << std::endl;
	std::cout << "Kandidat 3 enthielt " << k3 / gesamt * 100 << "% der Stimmen." << std::endl;

	system("PAUSE");
	return 0;
}