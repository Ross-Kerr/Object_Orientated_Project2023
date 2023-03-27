//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_CONTACT_HPP
#define OBJECT_ORIENTATED_PROJECT2023_CONTACT_HPP
#include <vector>
#include <string>


class Contact {
public:
    Contact(std::vector<std::string> ContactVector);
    std::string returnID();
    std::string returnFirstName();
    std::string returnLastName();
    std::string returnEmail();
    std::string returnCountry();
    bool operator==( const unsigned& s ) const {
        return ( id == std::to_string(s) )  ;

    }



private:


    std::string id;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string country;



};
#endif //OBJECT_ORIENTATED_PROJECT2023_CONTACT_HPP
