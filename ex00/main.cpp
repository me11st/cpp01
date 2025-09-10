#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("Heapster");
    heapZombie->announce();
    delete heapZombie;

    randomChump("Stacky");


    return 0;
}
