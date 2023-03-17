
#include "Utility.hpp"
#include <regex>
#include <iostream>
#include <vector>

VS Utility::tokenize( std::string &s ){

    auto const re = std::regex{R"(,+)"};
    auto const vec = VS(
            std::sregex_token_iterator{ begin(s), end(s), re, -1 },
            std::sregex_token_iterator{}
    );
    return vec ;
}

void Utility::toDisk(std::string fileName, std::string html) {
//ofstream to disk here
}

