//
// Created by rossk on 23/01/2023.
//
#include <vector>
#include <string>
#include "Contact.hpp"

Contact::Contact(std::vector<std::string> ContactVector) {

             id = (ContactVector.at(0))
            ,firstName =(ContactVector.at(1))
            ,lastName =(ContactVector.at(2))
            ,email =(ContactVector.at(3))
            ,country = (ContactVector.at(4));

}

std::string Contact::returnID(){
    return id;
}

std::string Contact::returnFirstName(){
    return firstName;
}

std::string Contact::returnLastName(){
    return lastName;
}

std::string Contact::returnEmail(){
    return email;
}

std::string Contact::returnCountry(){
    return country;
}





