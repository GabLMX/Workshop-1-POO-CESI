#include <iostream>

#include "Heroes.hpp"
#include "Creatures.hpp"

//Faire: g++ main.cpp Heroes.cpp Creatures.cpp -o program
//Puis: ./program

int main(void){
    Heroes Hrun = Heroes("Hrun", 10, 10, 8);
    Creatures YamaTsukami = Creatures("Yama Tsukami", 1000, 150, 700);

    std::cout << Hrun.affiche() << "\n";
    std::cout << YamaTsukami.affiche() << "\n";

    double h_atk1 = Hrun.attaque();
    YamaTsukami.subitDegat(h_atk1);

    if (YamaTsukami.estVivant() == true){
        double c_atk1 = YamaTsukami.attaque();
        Hrun.subitDegat(c_atk1);
    }
    else{
        std::cout << "Overwhelming! The creature has died!" << "\n";
    }

    if (Hrun.estVivant() != true){
        std::cout << "You've unfortunately died." << "\n";
    }

    std::cout << "\n" << "Encounter breakdown:" << "\n";
    std::cout << Hrun.affiche() << "\n";
    std::cout << YamaTsukami.affiche() << "\n";
}