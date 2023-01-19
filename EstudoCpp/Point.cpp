#include "Point.h"

Point::Point(std::vector<float> pts)
{
	std::string a = "point";
	SetType(a);

	for (auto pt : pts) {
		pontos.emplace_back(pt);
	}
}

std::string Point::SaveInfo()
{
	mensagem = "Geometry: { Type: " + GetType() + ", Coordenates: [";
	
	int t=0;
	for (auto ponto : pontos)
	{
		mensagem += std::to_string(ponto);
		++t;
		if (t < pontos.size()) { mensagem += " , ";}
	}
	mensagem += "] }";

		return mensagem;
}
