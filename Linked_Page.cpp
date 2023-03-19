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

    ContactLIst c;
    Element body ("body");
    Element header("header");
    Element orderedList("ol");
    Element list("li");
    Element anchor("a");
    anchor.addAttribute("href","index.html");
    anchor.addContent("Home Page");



    //  create body tag
    htmlBody.append(body.toString()).append("\n");

//    Create header tag and fill content
    htmlBody.append(header.addContent("Contact Details")).append(header.toString()).append("\n");

//    End header tag
    htmlBody.append(header.getEndTag()).append("\n");

//    Create Ordered list tag

    htmlBody.append(orderedList.toString()).append("\n");

//    Create List tag and fill with details
    for(auto& Contact: c.returnContactVector()) {

        Contact.returnFirstName();
        Contact.returnLastName();
        Contact.returnCountry();
        Contact.returnEmail();
        Element list("li");
        Element listEmail("li");
        Element listCountry("li");

        htmlBody.append(list.toString()).append(list.addContent(Contact.returnFirstName()+ " " + Contact.returnLastName()))
        .append(list.getEndTag()).append("\n");

        htmlBody.append(listEmail.toString()).append(listEmail.addContent(Contact.returnEmail()))
        .append(listEmail.getEndTag()).append("\n");

        htmlBody.append(listCountry.toString()).append(listCountry.addContent(Contact.returnCountry()))
        .append(listCountry.getEndTag()).append("\n");

    }

    htmlBody.append(orderedList.getEndTag()).append("\n");

    htmlBody.append(anchor.toString());
    htmlBody.append(anchor.getEndTag()).append("\n");

    htmlBody.append(body.getEndTag());
//
//    htmlBody.append("<body><header>Linked Page</header>\n"
//                    "<ol>\n"
//                    "<li>Name</li>\n"
//                    "<li>Email</li>\n"
//                    "<li>Country</li>\n"
//                    "</ol>\n"
//                    "<a href=\"index.html\">Home Page</a>\n"
//                    "</body>\n");

//    Return completed html body

    return htmlBody;
}
std::string Linked_Page::to_string(){
    generateLinkedPageHeader();
    generateLinkedPageBody();

    return htmlHeader.append(htmlBody);;
}