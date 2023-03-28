//
// Created by rossk on 30/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_CONTACTLIST_HPP
#define OBJECT_ORIENTATED_PROJECT2023_CONTACTLIST_HPP
#include "Contact.hpp"
#include <vector>
#include "Utility.hpp"


class ContactLIst {
public:
    ContactLIst();
    std::vector<Contact> returnContactVector();
    std::string findAndDisplay(std::basic_string<char> ID);

private:
    std::vector<Contact> ContactVector;

};


#endif //OBJECT_ORIENTATED_PROJECT2023_CONTACTLIST_HPP
