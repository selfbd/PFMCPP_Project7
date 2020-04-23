#include "Paladin.h"

Paladin::Paladin(std::string name_, int hitPoints, int armor) : Character(hitPoints, armor, 4), name(name_) {}

const std::string& Paladin::getName() { return name; }
std::string Paladin::getStats() { return "get stats"; }
