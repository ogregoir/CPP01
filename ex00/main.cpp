#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie2;
    Zombie  zombie("FOO");

    zombie.announce();
    zombie2 = newZombie("BIIIE");
    zombie2->announce();
    delete zombie2;

    randomChump("BOOOOO");

    return(0);
}