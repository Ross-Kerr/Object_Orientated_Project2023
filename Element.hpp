//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_ELEMENT_HPP
#define OBJECT_ORIENTATED_PROJECT2023_ELEMENT_HPP
#include <string>
#include <vector>
#include "Attribute.hpp"



class Element {
public:
    Element(std::string e);
    std::string toString();

    std::string addAttribute(std::string aName, std::string aValue);

private:
    std::string e_;
    std::vector<Attribute>Attribute;
    std::string htmlTag = "";
    std::string content_;

    std::string addContent(std::string content);

    std::string getEndTag();
};


#endif //OBJECT_ORIENTATED_PROJECT2023_ELEMENT_HPP
