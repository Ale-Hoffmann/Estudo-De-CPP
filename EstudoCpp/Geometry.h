#pragma once
#include<vector>
#include<string>


class Geometry
{
private:
	
	std::string type;
	

public:
	void SetType(const std::string tp) { type = tp; };

	const std::string GetType() { return type; };

	virtual std::string SaveInfo() = 0;
	
	std::string mensagem;
};

