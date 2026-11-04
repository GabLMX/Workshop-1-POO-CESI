#pragma once
#include <string>

//Les HPPs, les headers, doivent contenir la classe et les prototypes des méthodes.

class Creatures{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Creatures(std::string name, int Life, int Power, int Level){
        this->name = name;
        HP = Life;
        AP = Power;
        Lvl = Level;
    }

    std::string affiche(){
        return "You encounter.. ", name, " , with a power of ", std::to_string(AP),
        " and a life of ", std::to_string(HP), "! Its level is: ", std::to_string(Lvl), "\n";
    }

    double attaque(){
        double formula = (AP*(Lvl*(Lvl*0.25)));
        std::cout << name << " attacks and has inflicted " << formula << " damage!" << "\n";
        return formula;
    }

    double subitDegat(double degat){
        HP = HP - degat;
        std::cout << "Remaining Health Points: " << HP << "\n";
        return HP;
    }

    bool estVivant(){
        std::cout << "Death came knocking, and it has found you wanting." << "\n";
        return HP>0;
    }

};
