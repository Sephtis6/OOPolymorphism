#pragma once
#ifndef Character_H
#define Character_H

#include <string>
using namespace std;

//creates the bass class to be used in this program
class Character {
public:
	//public uses
	Character();
	Character(std::string N, string C);
	~Character();

	//gets and sets the name and health of the base class and displays
	string getName();
	void setName(string);
	string getHealth();
	void setHealth(string);
	void display();
protected:
	//available for inheriting by subclasses of character
	string name;
	string health;
private:
};


//displays the class name and the parent class
class Zombie : public Character {
public:
	//gets and sets zombies fspeed and weapon due to the fact that health and name are inherited from the parent class
	Zombie();
	Zombie(string N, string C, int R, string W);
	int getSpeed();
	void setSpeed(int);
	string getWeapon();
	void setWeapon(string);
	void display();
private:
	//private factors for this class only not for the parent or any sibling classes
	int speed;
	string weapon;
};

//displays the class name and parant class
class Vampire : public Character {
public:
	//gets and sets zombies fspeed and weapon due to the fact that health and name are inherited from the parent class
	Vampire();
	Vampire(string rName, string rHealth, int rPower, int rMagic);
	int getPower();
	void setPower(int rPower);
	int getMagic();
	void setMagic(int rMagic);
	void display();
	void display(bool details);
private:
	//private factors for this class only not for the parent or any sibling classes
	int power;
	int magic;
};

#endif

