//
// Created by rossk on 23/01/2023.
//

#include "fileReader.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>



using namespace std;

fileReader::fileReader() {}

void fileReader::readFile() {

//  Declare an input file stream variable
   ifstream inFile;


//  Open the file stream and loop to check if file was opened
   inFile.open("contacts.txt");
   if (!inFile){
       cout<<"Unable to open file. Please check file location";
       exit(1); // Terminate with error
   }

//  For loop together with get line function to read the file line by line
    for(std::string myText; getline(inFile,myText);){
//  Output the text from the file to show the file has been read correctly


    fileContents.push_back(myText);
   }


}

std::vector<std::string >fileReader::getContent(){
    return fileContents;
}












