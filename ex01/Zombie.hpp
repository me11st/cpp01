#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
    void setName(std::string name);
};
    // Function declarations for creating a horde of zombies
    Zombie* zombieHorde(int N, std::string name);
    Zombie* newZombie(std::string name);


#endif // ZOMBIE_HPP

