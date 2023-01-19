#pragma once
#include "Geometry.h"
class Point :
    public Geometry
{
private:
    
public:
    std::vector<float> pontos;

    Point(std::vector<float>pts);

    std::string SaveInfo() override;
};

