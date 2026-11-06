#include <iostream>
#include <string>
#pragma once

//Les HPPs, les headers, doivent contenir la classe et les prototypes des méthodes.

class Creatures{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Creatures(std::string name, int Life, int Power, int Level);
    std::string affiche();
    double attaque();
    double subitDegat(double degat);
    bool estVivant();
};