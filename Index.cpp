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



    htmlHeader.append(Derived_Header_).append(Derived_Stylesheet_);

    return htmlHeader;
}

std::string Index::generatePageBody(){



    htmlBody.append("<body><header>Home Page</header>\n"
                    "<ol>\n"
                    "<li><a href=\"#\">Link 1</a></li>\n"
                    "<li><a href=\"#\">Link 2</a></li>\n"
                    "</ol>\n"



                    "</body>\n");

    return htmlBody;
}
std::string Index::to_string(){
    generatePageHeader();
    generatePageBody();

    return htmlHeader.append(htmlBody);;
}



