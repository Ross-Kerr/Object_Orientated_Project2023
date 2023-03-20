//
// Created by rossk on 23/01/2023.
//

#ifndef OBJECT_ORIENTATED_PROJECT2023_LINKED_PAGE_HPP
#define OBJECT_ORIENTATED_PROJECT2023_LINKED_PAGE_HPP
#include "Website.hpp"
#include "Element.hpp"
#include "ContactLIst.hpp"
#include "Contact.hpp"
#include <filesystem>


class Linked_Page: public Website{
public:
    Linked_Page();
    std::string to_string() override;

private:
    std::string Derived_Header_;
    std::string Derived_Stylesheet_;
    std::string htmlHeader;
    std::string htmlBody;
    std::string generateLinkedPageHeader();
    std::string generateLinkedPageBody();

};


#endif //OBJECT_ORIENTATED_PROJECT2023_LINKED_PAGE_HPP
