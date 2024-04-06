#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

private :

std::string name;

public :

Zombie(std::string name);
Zombie ( void );
void    announce(void);

~Zombie ( void );
};

Zombie  *zombieHorde(int N, std::string name);

#endif