#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    
    Zombie::name = name;
    std::cout << "Constructor called" << std::endl;
    return;
}

Zombie::~Zombie( void ) {
    
    std::cout << name << "Destructor called" << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
