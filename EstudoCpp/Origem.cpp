#include<iostream>
#include"MultiPoint.h"
#include"Point.h"

int main() {
	std::vector<float> teste;
	float x,y,z;
	std::vector<std::array<float, 3>> pontos;
	int tam,aux = 0;
	std::cout << "quantos pontos deseja" << '\n';
	std::cin >> tam;
	pontos.resize(tam);

	do
	{
		
		std::cout << "Digite 3 numeros:" << '\n';
		std::cin >> x;
		//pontos[aux][0] = x;
		std::cin >> y;
		//pontos[aux][1] = y;
		std::cin >> z;
		//pontos[aux][2] = z;
		pontos[aux] = { x,y,z };
		aux++;

	} while (aux <= tam-1);

	
	
	MultiPoint multi(pontos);
	//Point ponto(teste);

	std::cout << multi.SaveInfo() << '\n';
	

	system("pause");
	return 0;

}