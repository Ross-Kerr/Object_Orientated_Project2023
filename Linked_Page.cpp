//
// Created by rossk on 23/01/2023.
//

#include "Linked_Page.hpp"

Linked_Page::Linked_Page() {
    Derived_Header_ = Header_;
    Derived_Stylesheet_ = Stylesheet_;
    std::string htmlHeader = "";
    std::string htmlBody = "";
}

std::string Linked_Page::generateLinkedPageHeader(){

//  create a html header tag using the header_ and stylesheet_ from website class appended together.

    htmlHeader.append(Derived_Header_).append(Derived_Stylesheet_);
// return new completed html header

    return htmlHeader;
}

std::string Linked_Page::generateLinkedPageBody(){

//  create body tag

    htmlBody.append("<body><header>Linked Page</header>\n"
                    "<ol>\n"
                    "<li>ID</li>\n"
                    "<li>Name</li>\n"
                    "<li>Email</li>\n"
                    "<li>Country</li>\n"
                    "</ol>\n"
                    "<a href=\"index.html\">Home Page</a>\n"
                    "</body>\n");

//    Return completed html body

    return htmlBody;
}
std::string Linked_Page::to_string(){
    generateLinkedPageHeader();
    generateLinkedPageBody();

    return htmlHeader.append(htmlBody);;
}