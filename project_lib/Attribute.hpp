//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_ATTRIBUTE_HPP
#define OBJECT_ORIENTATED_PROJECT2023_ATTRIBUTE_HPP
#include <string>


class Attribute {
public: Attribute(std::string n, std::string v);
    std::string returnAttributeName();
    std::string returnAttributeValue();

private:
    std::string AttributeName_;
    std::string AttributeValue_;

};

#endif //OBJECT_ORIENTATED_PROJECT2023_ATTRIBUTE_HPP
