//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_INDEX_HPP
#define OBJECT_ORIENTATED_PROJECT2023_INDEX_HPP
#include "Website.hpp"
#include "Contact.hpp"
#include "ContactLIst.hpp"
#include "Element.hpp"
#include "Utility.hpp"
#include "iostream"

class Index: public Website{
public:
    Index();
    std::string to_string() override;
    void addParagraph(std::string fileName, std::string paragraph);



private:
    std::string Derived_Header_;
    std::string Derived_Stylesheet_;
    std::string htmlHeader;
    std::string htmlBody;
    std::string HTML;
    std::string generatePageHeader();
    std::string generatePageBody();


};


#endif //OBJECT_ORIENTATED_PROJECT2023_INDEX_HPP
