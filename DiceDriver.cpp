
#include <iostream>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
#include "Dice.h"
using namespace std;

int main() {
	int test = 0;

	//dice object that take 2 paramaters 1) number of dice 2) counter for dices
	DiceCup dice1;
	DiceCup dice2;

	//set array to 0's
	dice1.initializeArray();
	dice2.initializeArray();

	//seed to generate random numbers
	srand(time(NULL));
	int userDice1,userDice2;
	cout << "Please enter enter the number of dices for player1 (1-3 max):" << endl;
	cin >> userDice1;
	cout << "Please enter enter the number of dices  for player2 (1-3 max):" << endl;
	cin >> userDice2;
	do {
	
	//set ctor number of dice 
	dice1.setNumberOfDice(userDice1);
	dice2.setNumberOfDice(userDice2);

	//******************************DICE1*********************************
	cout << "\n\td1 dice rolled..." << endl;
	cout << "==========================================" << endl;
	dice1.rollDice();
	cout << "==========================================";

	cout << "\n\tThe percentage of dice1" << endl;
	dice1.showPercentage();
	cout << "==========================================" << endl;
	
	//******************************DICE2*********************************
	cout << "\n\td2 dice rolled..." << endl;
	cout << "==========================================" << endl;
	dice2.rollDice();
	cout << "==========================================";

	cout << "\n\tThe percentage of dice2" << endl;
	dice2.showPercentage();
	cout << "==========================================";

	test++;
	} while (test < 3);
	cout << "\n";
	return 0;
}