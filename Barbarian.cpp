/*********************************************************************
* Class: Barbarian
* Abstraction the class represents: Character with special abilities
* Purpose: Implement character-specific attack and defense
* How to use: Pointer to character accessed in the main
* Summary of functionality: Enter pointer to character's enemy, and/or enemy
* attack points into character-specific function
*********************************************************************/

#include "Barbarian.h"

//contructor
Barbarian::Barbarian(){
    attack = 0; //roll  dice
    defense = 0; //roll dice
    armor = 0;
    strengthPoints = 12;
}

int Barbarian::Attack(Character *enemy){
    int die1= (rand()%6+1);
    int die2= (rand()%6+1);
    cout << "Barbarian: Strength " << getStrengthPoints() << endl;
    cout<<"Barbarian: Die one rolled: "<<die1<<endl;
    cout<<"Barbarian: Die two rolled: "<<die2<<endl;
    this->attack = die1+die2 ;
    cout<<"Barbarian: Attack for "<<getAttack()<<" total points"<<endl;
    return attack;
}

int Barbarian::Defense(Character *enemy, int enemyAttackPts) {
    int damage;
    checkForDeath();
    if (!isDead) {
        int die1 = (rand() % 6 + 1);
        int die2 = (rand() % 6 + 1);
        cout << "Barbarian: Strength " << getStrengthPoints() << endl;
        cout << "Barbarian: Die one rolled: " << die1 << endl;
        cout << "Barbarian: Die two rolled: " << die2 << endl;
        this->defense = die1 + die2;

        damage = enemyAttackPts - defense - armor;
        damage = zeroOutDamage(damage);
        setStrengthPoints(this->strengthPoints - damage);
        //standard print out of defense info
        cout << "Barbarian: Defend for " << defense << " total points" << endl;
        cout << "After armor of " << getArmor() << " and defense of " << getDefense() << endl;
        cout << "Barbarian: sustain damage of " << damage << endl;
        cout << "Barbarian's remaining strength is " << getStrengthPoints() << endl;

        //if strength is below 0, character dies
        checkForDeath();

    }
    return damage;
}
    void Barbarian::checkForDeath(){
        if (getStrengthPoints()<=0){
            cout << "           " << endl;
            cout << "           BARBARIAN HAS DIED!" << endl;
            isDead = true;
        }
    }


