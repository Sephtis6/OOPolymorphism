#include <iostream>
#include <iomanip>
#include "Character.h"
using namespace std;

void main() {
	Character shape1;  // default constructor
	shape1.display();
	//displays the character class with a the variables filled in
	Character shape2 = Character("Superman", "100");
	shape2.display();

	//displays the inherited variables but not the private ones due to display being false
	Vampire vamp1 = Vampire("Dracula", "90", 45, 40);
	vamp1.display(false);
	//displays the variables both private and inhertied due to display being empty or true
	Vampire vamp2 = Vampire("Alucard", "85", 40, 35);
	vamp2.display();
	//displays the variables both private and inhertied due to display being empty or true
	Zombie zomb1 = Zombie("Shambler", "4", 5, "Rusty Knife");
	zomb1.display();

	//pauses to allow you to read the outputs displayed
	system("pause");
}