#include "MultiPoint.h"

MultiPoint::MultiPoint(std::vector<std::array<float, 3>> pts)
{
	std::string aux = "MultiPoint";
	SetType(aux);
	for (auto pt : pts)
	{
		pontos.emplace_back(pt);
		for (int o = 0; o < 3; o++)
		{
			pontos[pontos.size()-1][o] = pt[o];
		}
	}

}

std::string MultiPoint::SaveInfo()
{
	mensagem = "Geometry: { Type: " + GetType() + ", Coordenates: [";

	int i = 0,o=0;

	for (auto ponto : pontos)
	{
		mensagem += "[" ;
			for (auto pt : ponto)
			{
				mensagem += std::to_string(pt);
				i++;
				if (i < ponto.size()) { mensagem += " , "; }
			}
			i = 0;
		o++;
		mensagem += "]";
		if (o < pontos.size()) { mensagem += ","; }
	}

	mensagem += " }";

	return mensagem;
}
