#include "Creatures.hpp"
#include <iostream>

//Les CPPs doivent contenir les méthodes.

Creatures::Creatures(std::string name, int Life, int Power, int Level){
    this->name = name;
    HP = Life;
    AP = Power;
    Lvl = Level;
}

std::string Creatures::affiche(){
    return "You encounter.. " + name + ", with a power of " + std::to_string(AP) +
    " and a life of " + std::to_string(HP) + "! Its level is: " + std::to_string(Lvl);
}

double Creatures::attaque(){
    double formula = (AP*(Lvl*(Lvl*0.05)));
    std::cout << name << " attacks and has inflicted " << formula << " damage!" << "\n";
    return formula;
}

double Creatures::subitDegat(double degat){
    HP = HP - degat;
    std::cout << "Monster's remaining Health Points: " << HP << "\n";
    return HP;
}

bool Creatures::estVivant(){
    return HP>0;
}