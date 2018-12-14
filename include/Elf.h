//
// Created by travis on 12/5/18.
//

#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H
#include"creature.h"
namespace edu{namespace vcccd{namespace vc{namespace csv13{
class Elf: public Creature{

    const std::string species = "Elf";
public:
    Elf(): Creature(){}
    Elf(int newStrength, int newHitpoints): Creature(newStrength, newHitpoints){}
public:
    int getDamage() const;
    const std::string &getSpecies() const;
};
}}}}
#endif //EX08_CREATURES_ELF_H
