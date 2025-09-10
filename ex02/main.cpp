#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of str:      " << &str << std::endl;
    std::cout << "Address in stringPTR:" << stringPTR << std::endl;
    std::cout << "Address in stringREF:" << &stringREF << std::endl;

    std::cout << "Value of str:        " << str << std::endl;
    std::cout << "Value pointed by PTR:" << *stringPTR << std::endl;
    std::cout << "Value via REF:       " << stringREF << std::endl;

    stringPTR = NULL; // or nullptr in C++11+
    std::cout << "Pointer after NULL: " << stringPTR << std::endl;
    std::cout << "Reference still points to: " << stringREF << std::endl;

    return 0;
}
