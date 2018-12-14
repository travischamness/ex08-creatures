//
// Created by travis on 12/5/18.
//

#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H
#include"Demon.h"

namespace edu{namespace vcccd{namespace vc{namespace csv13{

class Balrog: public Demon{
    //Private member
    const std::string species = "Balrog";
public://Constructors
    Balrog(): Demon(){}
    Balrog(int newStrength,int newHitpoints): Demon(newStrength, newHitpoints){}
public://getters cause holla
    int getDamage() const;
    const std::string &getSpecies() const;
};
}}}}
#endif //EX08_CREATURES_BALROG_H
