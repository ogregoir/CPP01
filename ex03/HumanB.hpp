#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private :

Weapon *arm;
std::string name;

public :

HumanB( void );
HumanB( std::string name );
void setWeapon(Weapon &arm);
void Attack();
~HumanB ( void );

};

#endif