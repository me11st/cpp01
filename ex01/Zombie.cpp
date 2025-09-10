#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie() : name("Unnamed") {}
Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << ": destroyed" << std::endl;
}


void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
