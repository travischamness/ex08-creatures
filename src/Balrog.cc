//
// Created by travis on 12/5/18.
//

#include "creature.h"
namespace edu{namespace vcccd{namespace vc{namespace csv13{

    //species = Balrog
const std::string& Balrog::getSpecies() const {return species;}
//Damage builds upon the Demon class
int Balrog::getDamage() const {
    int damage = Demon::getDamage();
    int damage2 = (rand() % getStrength()) + 1;
    damage = damage + damage2;
    return damage;
}

}}}}
