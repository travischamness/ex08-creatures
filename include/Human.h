//
// Created by travis on 12/5/18.
//

#ifndef EX08_CREATURES_HUMAN_H
#define EX08_CREATURES_HUMAN_H

#include"creature.h"
namespace edu{namespace vcccd{namespace vc{namespace csv13{

class Human: public Creature{
    const std::string species = "Human";
public:
    Human(): Creature(){}
    Human(int newStrength, int newHitpoint): Creature(newStrength, newHitpoint){}
public:

    const std::string &getSpecies() const;

};
            }}}}
#endif //EX08_CREATURES_HUMAN_H
