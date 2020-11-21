#pragma once

#include <string>

class Recipes
{
public:
    int coffeeWeght;
    float grinding;
    int waterVolumeEntrance;
    int waterVolumeOutput;
    int waterTemperature;
    int cookingTime;
    string preparationMethod;

    Recipes() {}
    Recipes(int coffeeWeght, float grinding, int waterVolumeEntrance, int waterVolumeOutput, int waterTemperature, int cookingTime, string preparationMethod)
    {
        this->coffeeWeght = coffeeWeght;
        this->grinding = grinding;
        this->waterVolumeEntrance = waterVolumeEntrance;
        this->waterVolumeOutput = waterVolumeOutput;
        this->waterTemperature = waterTemperature;
        this->cookingTime = cookingTime;
        this->preparationMethod = preparationMethod;
    }

};
