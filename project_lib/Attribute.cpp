//
// Created by rossk on 23/01/2023.
//

#include "Attribute.hpp"


Attribute::Attribute(std::string AttributeName, std::string AttributeValue)
        : AttributeName_{AttributeName},
          AttributeValue_{AttributeValue}
{}

std::string Attribute::returnAttributeName() {
    return AttributeName_;
}

std::string Attribute::returnAttributeValue() {
    return AttributeValue_;
}



