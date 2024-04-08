#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private :

Weapon &arm;
std::string name;

public :

HumanA( std::string name, Weapon &arm);
void Attack();
~HumanA ( void );

};

#endif