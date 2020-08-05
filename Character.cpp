/*********************************************************************
* Class: Character
* Abstraction the class represents: This is a day character used by
* all fictional fantasy combat game characters in the simulation.
* Purpose:  and abstract base class used to populate data members
* and virtual functions to  other child classes.
* How to use:  Implement virtual functions in the specific child classes.
*  populate the data member values in each class.
*
*********************************************************************/

#include "Character.h"

//constructor
Character::Character(){

}

/*********************************************************************
* Function:Attack(Character *enemy)
* Purpose:  Take in a pointer to the character and calculate its total attack
* based on its individually implemented attack function.
* Arguments|Preconditions:  A pointer to the specific type of enemy character needs to be created
* and passed into this function
* Return Type: Int
*********************************************************************/

int Character::Attack(Character *enemy){

    return 0;
}

/*********************************************************************
* Function:Defense(Character *enemy)
* Purpose:  Take in a pointer to the character  as well as the attack points
* generated by the enemy and calculate  the defenders  total defense and damage.
* Arguments|Preconditions:  A pointer to the specific type of enemy character needs to be created
* and passed into this function  as well as integer for the amount of the attackpoints
* generated by the enemy.
* Return Type: Int
*********************************************************************/

int Character::Defense(Character *enemy, int damage) {

    return 0;
}

//getters/setters
int Character::getAttack() const {
    return attack;
}

int Character::getDefense() const {
    return defense;
}

int Character::getArmor() const {
    return armor;
}

int Character::getStrengthPoints() const {
    return strengthPoints;
}

void Character::setStrengthPoints(int strengthPoints) {
    Character::strengthPoints = strengthPoints;
}

/*********************************************************************
* Function: zeroOutDamage(int )
* Purpose:  Friend function used to earn negative damage value into zero damage.
*  this ensures that the damage/strength calculation is not messed up.
* Arguments|Preconditions:  integer for the total damage inflicted on the defender
* Return Type: int
*********************************************************************/

int Character::zeroOutDamage(int damage){
    if (damage<0){
        damage=0;
        return damage;
    }
    return damage;
}
//virtual destructor
Character::~Character() {

}