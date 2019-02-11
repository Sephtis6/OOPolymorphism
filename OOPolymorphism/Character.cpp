#include <iostream>
#include <iomanip>
#include "Character.h"
using namespace std;

//displays the character constructor and destuctor
Character::Character() {}
Character::~Character() { cout << "Character destructor called."; }

//getting the virables for the base character class allowing them to be modified when displayed
Character::Character(string N, string C) {
	name = N;
	health = C;
}

//has the character get and set the name of the displayed character
string Character::getName() { return name; }
void Character::setName(string N) { name = N; }

//has the character get and set the health of the displayed character
string Character::getHealth() { return health; }
void Character::setHealth(string C) { health = C; }

//displays the character class with the following text and the given name and health
void Character::display() {
	cout << "This Character is named " << name << " with "
		<< health << " health points." << endl << endl;
}

//getting the virables for the base zombie class allowing them to be modified when displayed
Zombie::Zombie() {}
Zombie::Zombie(string N, string C, int R, string W)
{
	name = N;
	health = C;
	speed = R;
	weapon = W;
}
//gets and sets the zombies speed and weapon name
int Zombie::getSpeed() { return speed; }
void Zombie::setSpeed(int R) { speed = R; }
string Zombie::getWeapon() { return weapon; }
void Zombie::setWeapon(string W) { weapon = W; }

//displays the zombie class with the following text desctribing their species name, health, speed and weapon
void Zombie::display() {
	cout << "This Zombie species is " << name
		<< " with " << health << " health points,"
		<< "and a speed of " << speed << ""
		<< " carring weapons called " <<weapon <<
		endl << endl;
}

//getting the virables for the base vampire class allowing them to be modified when displayed
Vampire::Vampire() {}
Vampire::Vampire(string rName, string rHealth, int rPower, int rMagic)
	: Character::Character(rName, rHealth)
{
	name = rName;
	health = rHealth;
	power = rPower;
	magic = rMagic;
}
//gets and sets the vampires power and magic level
int Vampire::getPower() { return power; }
void Vampire::setPower(int W) { power = W; }
int Vampire::getMagic() { return magic; }
void Vampire::setMagic(int H) { magic = H; }

//displays the vampire class with the following text desctribing their name, health, power and magic levels
void Vampire::display() {
	Character::display();
	cout << "This Vampire is named " << name
		<< " with " << health << " health points,"
		<< "and a power level of " << power << ""
		<< "and a magic level of " << magic <<
		endl << endl;
}

//uses a bool to display what subset of the vampire class depending of the method used to call
void Vampire::display(bool details) {
	Character::display();
	if (details) {
		cout << "This Vampire species named " << name
			<< " with " << health << " health points,\n"
			<< "and a power level of " << power << "."
			<< "They also has a magic level of " << magic <<
			endl << endl;
	}
}