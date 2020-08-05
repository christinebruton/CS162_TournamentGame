
/*********************************************************************
* Program name: combat game
* Author: Christine Bruton
* Student ID: 933010860
* Date: 2/14/2018
* Description: A combat simuulatin. Each combat between 2 characters ends when one of the characters die.
Each round consists of two attacks, one for each character.
* Citations: None
*********************************************************************/

#include <iostream>
#include "Character.h"
#include "Utilities.h"
#include "Vampire.h"
#include "Barbarian.h"
#include "Bluemen.h"
#include "Medusa.h"
#include "HarryPotter.h"

//function prototypes
int pAMenu();
int aChoice=0;
int dChoice=0;
Character *charA;
Character *charB;

int main(int argc, const char * argv[]) {
    int repeatChoice = 0;// used in a do while loop with PA menu to determine  if user want so play again.
    //randomizer seed for dice
    srand(time(0));
    Utilities menu;

    do {

        //display attacker (character A) menu
        aChoice= menu.attackerMenu();

        //determine character type
        if(aChoice==1){
            Barbarian *b= new Barbarian;
            charA= b;
        }
        else if(aChoice==2){
            BlueMen *bM =new BlueMen;
            charA=bM;
        }
        else if(aChoice==3){
            HarryPotter *hp=new HarryPotter();
            charA=hp;
        }
        else if(aChoice ==4){
            Medusa *m= new Medusa;
            charA=m;
        }
        else if(aChoice==5){
            Vampire *v=new Vampire;
            charA=v;
        }
        //show defender (character B) menu
        dChoice= menu.defenderMenu();

        //determine character type
        if(dChoice==1){
            Barbarian *b= new Barbarian;
            charB= b;
        }
        else if(dChoice==2){
            BlueMen *bM =new BlueMen;
            charB=bM;
        }
        else if(dChoice==3){
            HarryPotter *hp=new HarryPotter();
            charB=hp;
        }
        else if(dChoice ==4){
            Medusa *m= new Medusa;
            charB=m;
        }
        else if(dChoice==5){
            Vampire *v=new Vampire;
            charB=v;
        }
        //one round consists of two attacks, one for each character.
        double round=.5;

        //general combat info display
        while (charA->getStrengthPoints()>0 && charB->getStrengthPoints()>0) {

                cout << "               COMBAT ROUND: "<<round<< endl;
                cout << " ==============================================  " << endl;
                cout << " " << endl;
                cout << "               ATTACK OCCURS!" << endl;
                cout << " " << endl;
                int attackPts=0;
                attackPts=charA->Attack(charB);
                cout << "              " << endl;
                cout << " " << endl;
                cout << "               DEFENSE OCCURS!" << endl;
            cout << " " << endl;
                charB->Defense(charA, attackPts);
                cout << " " << endl;

                cout << "                  " << endl;
                cout << " ==============================================  " << endl;

                //swap characters
                Character *temp;
                temp=charA;
                charA= charB;
                charB= temp;

                //increment rounds by 1/2
                round=round+.5;
        };
        //display when someone dies
        cout << " " << endl;

        cout << "              COMBAT HAS ENDED!" << endl;

        cout << "                  " << endl;


        repeatChoice=pAMenu();

    } while (repeatChoice == 1);

    //virtual destructors called
    delete charA;
    delete charB;
    return 0;
}

/*********************************************************************
** Function: PAMenu()
** Purpose: Used in a do while loop in the main to see if the user
 * wants to play the game again.
** Arguments|Preconditions: None
** Return Type: None
*********************************************************************/

    int pAMenu(){
        Utilities menuTwo;
        //variables used in input validation
        int pAChoice= 1;
        bool temp = 0;
        string inputStr = "";
        //display menu
        cout<<"                                        "<<endl;
        cout<<" ============ TEST AGAIN? ============  "<<endl;
        cout<<"                                        "<<endl;
        cout<<"  [1] Play again                        "<<endl;
        cout<<"  [2] Quit                              "<<endl;
        cout<<"                                        "<<endl;
        cout<<" ====================================== "<<endl;
        cout<<"  Enter your selection:"<<endl;
        //input validation: takes in choice as a string
        while (!temp || (pAChoice != 1 && pAChoice !=2)){
            getline(cin, inputStr );
            //processes string through validation function and returns bool
            temp = menuTwo.inputValid(inputStr);
            if(temp){
                //converts to int if no letters detected
                pAChoice = stoi(inputStr);
            }
            if(pAChoice != 1 && pAChoice != 2){
                //error msg if int is out of range
                cout << "Enter a 1 or 2. Please try again: " << endl;
            }
        }
        switch (pAChoice) {
            case 1:
            {
                cout<< "You have selected [1]."<<endl;
                pAChoice= 1;
            }
                break;
            case 2:
            {
                cout<< "You have selected [2] QUIT."<<endl;
                pAChoice= 0;
            }
                break;
        }
        return pAChoice;
    }//end function





