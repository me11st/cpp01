#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "[DEBUG] I really love butterflies, you know... I mean they are not like bugs, though they technically are!" << std::endl;
}

void Harl::info() {
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error() {
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    typedef void (Harl::*HarlFunc)();
    struct LevelMap { const char* name; HarlFunc func; };
    static const LevelMap levels[] = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
    };
    for (size_t i = 0; i < sizeof(levels)/sizeof(LevelMap); ++i) {
        if (level == levels[i].name) {
            (this->*levels[i].func)();
            return;
        }
    }
    std::cout << "[UNKNOWN] Harl has nothing to say at this level." << std::endl;
}
