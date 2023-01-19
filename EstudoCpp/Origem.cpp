#include<iostream>
#include"Point.h"

int main() {
	std::vector<float> teste;
	float aux;

	std::cout << "Digite 3 numeros:" << '\n';
	std::cin >> aux;
	teste.push_back(aux);
	std::cin >> aux;
	teste.push_back(aux);
	std::cin >> aux;
	teste.push_back(aux);
	
	Point ponto(teste);

	std::cout << ponto.SaveInfo() << '\n';
	

	system("pause");
	return 0;

}