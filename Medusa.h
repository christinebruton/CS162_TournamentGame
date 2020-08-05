/*********************************************************************
* Class: Medusa
* Abstraction the class represents: Character with special abilities
* Purpose: Implment character-specific attack and defense
* How to use: Pointer to character accessed in the main
* Summary of functionality: Enter pointer to character's enemy, and/or enemy
 * attack points into character-specific funtion
*********************************************************************/


#ifndef COMBATGAME_MEDUSA_H
#define COMBATGAME_MEDUSA_H

#include <stdio.h>
#include "Character.h"
#include <cstdlib>

class Medusa : public Character{

public:
    Medusa();
    //see function defintion in Character
    int Attack(Character *enemy) override;
    //see function defintion in Character
    int Defense(Character *enemy, int damage) override;
};


#endif //COMBATGAME_MEDUSA_H
