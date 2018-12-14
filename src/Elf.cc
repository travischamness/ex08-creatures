//
// Created by travis on 12/5/18.
//
#include "Elf.h"

namespace edu{namespace vcccd{namespace vc{namespace csv13{
    int Elf::getDamage() const {
        int damage = Creature::getDamage();
        if ((rand() % 10)==0) {
            damage = damage * 2;
        }
        return damage;
    }
//    const std::string Elf::getSpecies(){ return species;}
    const std::string& Elf::getSpecies() const {return species;}
}}}}
