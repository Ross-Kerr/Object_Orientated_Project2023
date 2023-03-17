#pragma once
#include <string>
#include <vector>


using VS = std::vector<std::string>;
class Utility{

public:Utility() {

    }

    VS tokenize(std::string &s);
    void toDisk(std::string fileName, std::string html);
};



