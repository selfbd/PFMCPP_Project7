#include "Paladin.h"

Paladin::Paladin(std::string name_, int hitPoints, int armor) : name(name_) :
    Character
    (
        hp(hitPoints),
        armor_(armor),
        attackDamage_(10)
    );
~Paladin() {};

std::string& Paladin::getName() override { return name };
std::string Paladin::getStats() override { return "get stats" };
