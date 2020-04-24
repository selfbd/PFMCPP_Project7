#include "AttackItem.h"
#include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
#include <cassert>

void AttackItem::use(Character* character)
{
    //assert(false); 
    //make your defensive item use the appropriate Utility helper functions
    useAttackItem(character, this);
}
