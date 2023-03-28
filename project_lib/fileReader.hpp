//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_FILEREADER_HPP
#define OBJECT_ORIENTATED_PROJECT2023_FILEREADER_HPP
#include <string>
#include <vector>
#include <iostream>
#include <fstream>


class fileReader {
public:fileReader();
    void readFile();
    std::vector<std::string >getContent();

private:
    std::vector<std::string> fileContents;

};


#endif //OBJECT_ORIENTATED_PROJECT2023_FILEREADER_HPP
