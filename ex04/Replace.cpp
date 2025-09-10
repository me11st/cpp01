#include "Replace.hpp"

std::string Replace::replaceAll(const std::string& input, const std::string& s1, const std::string& s2) {
    if (s1.empty()) return input;
    std::string result;
    size_t pos = 0, found;
    while ((found = input.find(s1, pos)) != std::string::npos) {
        result.append(input.substr(pos, found - pos));
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(input.substr(pos));
    return result;
}
