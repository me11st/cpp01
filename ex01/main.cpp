#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 42;
    Zombie* horde = zombieHorde(N, "Hordey");
    for (int i = 0; i < N; i += 2) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
