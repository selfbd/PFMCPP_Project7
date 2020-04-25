#pragma once

#include "Item.h"
#include "Character.h"

struct AttackItem : Item
{
    AttackItem(const std::string& name_, int effect) : Item(name_, effect) { }
    void use(Character* character) override;
};
