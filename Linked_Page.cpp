//
// Created by rossk on 23/01/2023.
//

#include "Linked_Page.hpp"

Linked_Page::Linked_Page() {
    Derived_Header_ = Header_;
    Derived_Stylesheet_ = Stylesheet_;
    htmlHeader = "";
    htmlBody = "";
}

std::string Linked_Page::generateLinkedPageHeader(){

//  create a html header tag using the header_ and stylesheet_ from website class appended together.

    htmlHeader.append(Derived_Header_).append(Derived_Stylesheet_);
// return new completed html header

    return htmlHeader;
}

std::string Linked_Page::generateLinkedPageBody(){

    std::filesystem::directory_entry d{"C:\\Users\\rossk\\OneDrive\\Documents\\HND Year 2\\Contact Project Website"};
    std::filesystem::path path_ { d };



    ContactLIst c;


//    Create For loop to create a linked page for each contact
    for(auto& Contact: c.returnContactVector()) {

        Contact.returnFirstName();
        Contact.returnLastName();
        Contact.returnCountry();
        Contact.returnEmail();
        Element body("body");
        Element header("header");
        header.addContent("Contact Details");
        Element orderedList("ol");
        Element anchor("a");
        anchor.addAttribute("href", "index.html");
        anchor.addContent("Home Page");
        Element list("li");
        Element listEmail("li");
        Element listCountry("li");

        //  create body tag
        htmlBody.append(body.toString()).append("\n");

//    Create header tag and fill content
        htmlBody.append(header.toString()).append("\n");

//    End header tag
        htmlBody.append(header.getEndTag()).append("\n");

//    Create Ordered list tag

        htmlBody.append(orderedList.toString()).append("\n");

//        Append the contacts first and last name to the list
        htmlBody.append(list.toString()).append(
                        list.addContent(Contact.returnFirstName() + " " + Contact.returnLastName()))
                .append(list.getEndTag()).append("\n");

//        Append the contacts email to the list
        htmlBody.append(listEmail.toString()).append(listEmail.addContent(Contact.returnEmail()))
                .append(listEmail.getEndTag()).append("\n");

//        Append the contacts country to the list
        htmlBody.append(listCountry.toString()).append(listCountry.addContent(Contact.returnCountry()))
                .append(listCountry.getEndTag()).append("\n");

//    End the ordered list tag
        htmlBody.append(orderedList.getEndTag()).append("\n");

//    Create and close a link to take the client back to the homepage
        htmlBody.append(anchor.toString());
        htmlBody.append(anchor.getEndTag()).append("\n");

//    Close the body tag
        htmlBody.append(body.getEndTag());

//  close the For loop
    }

    return htmlBody;
}
std::string Linked_Page::to_string(){
    generateLinkedPageHeader();
    generateLinkedPageBody();

    return htmlHeader.append(htmlBody);
}