#include <iostream>

int main()
{
	int v1, v2, v_tmp;

	std::cout << "Bitte geben Sie den ganzzahligen Wert der ersten Variable ein: "; std::cin >> v1;
	std::cout << "Bitte geben Sie den ganzzahligen Wert der zweiten Variable ein: "; std::cin >> v2;

	v_tmp = v1; v1 = v2; v2 = v_tmp;

	std::cout << "Nach dem Tausch: " << std::endl << "Wert der ersten Variable: " << v1 << std::endl << "Wert der zweiten Variable: " << v2 << std::endl;

	system("PAUSE");
	return 0;
}