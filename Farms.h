#pragma once

#include <string>

using namespace std;

class Farms
{
public:
    string nameOfFarms;
    string country;

    Farms() {}
    Farms(string nameOfFarms, string country)
    {
        this->nameOfFarms = nameOfFarms;
        this->country = country;
    }
};
