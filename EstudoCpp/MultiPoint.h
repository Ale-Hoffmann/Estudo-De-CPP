#pragma once
#include<array>
#include "Geometry.h"
class MultiPoint :
    public Geometry
{
private:

public:
    std::vector<std::array<float,3>> pontos;

    MultiPoint(std::vector<std::array<float, 3>>pts);

    std::string SaveInfo() override;
};

