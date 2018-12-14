//
// Created by travis on 12/5/18.
//

#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H
#include"Demon.h"
namespace edu{namespace vcccd{namespace vc{namespace csv13{
    class CyberDemon: public Demon{
        std::string species = "Cyber Demon";
    public:
        CyberDemon(): Demon(){}
        CyberDemon(int newStrength, int newHitpoint): Demon(newStrength, newHitpoint){}
    public:
        int getDamage() const;
        const std::string& getSpecies() const;
    };
}}}}


#endif //EX08_CREATURES_CYBERDEMON_H
