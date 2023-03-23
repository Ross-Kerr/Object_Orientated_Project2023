
#include "Utility.hpp"
#include <regex>
#include <iostream>
#include <filesystem>
#include <fstream>
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
    const std::filesystem::directory_entry d{"F:\\Stefans Project\\"};
    std::filesystem::path path_ { d };

    path_.append(fileName);
    std::cout << "Write file to: " << path_ << "\n";

    std::ofstream ofs;
    ofs.open(path_, std::ofstream::out);
    ofs << html;
    ofs.close();



}

