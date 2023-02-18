
#include "Utility.hpp"
#include <regex>
#include <iostream>
#include <vector>

VS tokenize( std::string &s ){

    auto const re = std::regex{R"(,+)"};
    auto const vec = VS(
            std::sregex_token_iterator{ begin(s), end(s), re, -1 },
            std::sregex_token_iterator{}
    );
    return vec ;
}