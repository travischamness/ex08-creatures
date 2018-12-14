//
// Created by travis on 12/6/18.
//

#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H
#include "creature.h"

namespace edu{namespace vcccd{namespace vc{namespace csv13{

    class Demon: public Creature{
    public:
        Demon(): Creature(){}//Initializes with Creature information
        Demon(int newStrength, int newHit): Creature(newStrength, newHit){}
        int getDamage() const{
             int damage = Creature::getDamage();
             if ((rand() % 100) < 5) { //BOOM BIG HIT
                  return damage + 50;
             }
             else {return damage;}
        }
//        const std::string &getSpecies();

     };
}}}}

#endif //EX08_CREATURES_DEMON_H
