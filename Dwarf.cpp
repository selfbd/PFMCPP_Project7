#include "Dwarf.h"

Dwarf::Dwarf(std::string name_, int hitPoints, int armor) : name(name_) :
    Character
    (
        hp(hitPoints),
        armor_(armor),
        attackDamage_(4)
    );
~Dwarf() {};

std::string& Dwarf::getName() override { return name };
std::string Dwarf::getStats() override { return "get stats" };
