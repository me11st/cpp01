#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA subA("subA", club);
        subA.attack();
        club.setType("some other type of club");
        subA.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB subB("subB");
        
        subB.attack();
        subB.setWeapon(club);
        club.setType("some deadly type of club");
        subB.attack();
    }
    return 0;
}
