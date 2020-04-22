#include "Dragon.h"
#include "DragonSlayer.h"

Dragon::Dragon(std::string name_, int hitPoints, int armor) : name(name_) :
    Character
    (
        hp(hitPoints),
        armor_(armor),
        attackDamage_(80)
    );
~Dragon() {};

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

std::string& Dragon::getName() override { return name };
std::string Dragon::getStats() override { return "get stats" };
