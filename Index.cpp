//
// Created by rossk on 23/01/2023.
//

#include <iostream>
#include "Index.hpp"

Index::Index()
{
    Derived_Header_ = Header_;
    Derived_Stylesheet_ = Stylesheet_;
    std::string htmlHeader = "";
    std::string htmlBody = "";
}
std::string Index::generatePageHeader(){

//  create a html header tag using the header_ and styelsheet_ from website class appended together.

    htmlHeader.append(Derived_Header_).append(Derived_Stylesheet_);
// return new completed html header

    return htmlHeader;
}

std::string Index::generatePageBody(){

//  create body tag

    htmlBody.append("<body><header>Home Page</header>\n"
                    "<ol>\n"
                    "<li><a href=\"#\">Link 1</a></li>\n"
                    "<li><a href=\"#\">Link 2</a></li>\n"
                    "</ol>\n"



                    "</body>\n");

//    Return completed html body

    return htmlBody;
}
std::string Index::to_string(){
    generatePageHeader();
    generatePageBody();

    return htmlHeader.append(htmlBody);;
}



