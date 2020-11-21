#pragma once

#include <string>
#include "Farms.h"
#include "Date.h"
#include "Recipes.h"

using namespace std;

class Lots
{
public:
    Farms name;
    string grade;
    int cropYear;
    Date dateOfPurchase;
    Date dateOfRoastig;
    Recipes recipes;

    Lots() {}
    Lots(Farms name, string grade, int cropYear, Date dateOfPurchase, Date dateOfRoastig, Recipes recipes)
    {
        this->name = name;
        this->grade = grade;
        this->cropYear = cropYear;
        this->dateOfPurchase = dateOfPurchase;
        this->dateOfRoastig = dateOfRoastig;
        this->recipes = recipes;
    }
};
