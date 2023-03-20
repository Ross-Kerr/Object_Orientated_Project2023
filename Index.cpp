//
// Created by rossk on 23/01/2023.
//

#include "Index.hpp"
#include <iostream>

Index::Index()
{
    Derived_Header_ = Header_;
    Derived_Stylesheet_ = Stylesheet_;
    htmlHeader = "";
    htmlBody = "";
    HTML ="";
    generatePageHeader();
    generatePageBody();






}
std::string Index::generatePageHeader(){

//  create a html header tag using the header_ and stylesheet_ from website class appended together.

    htmlHeader.append(Derived_Header_).append(Derived_Stylesheet_);
// return new completed html header

    return htmlHeader;
}

std::string Index::generatePageBody(){

    ContactLIst c;
    Element body ("body");
    Element header("header");
    header.addContent("Home Page");
    Element orderedList("ol");




//  create body tag
    htmlBody.append(body.toString()).append("\n");

//    Create header tag and fill content
                    htmlBody.append(header.toString()).append(header.getEndTag()).append("\n");

//    Create Ordered list tag

                    htmlBody.append(orderedList.toString()).append("\n");

//                    Counter for Debugging
//                    unsigned counter = 0;

//    Begin loop to create listed contacts
                    for(auto& Contact: c.returnContactVector()) {


//                        Contact.returnFirstName();
//                        Contact.returnLastName();
                        Element list("li");
                        Element anchor("a");
                        anchor.addAttribute("href",
                                            Contact.returnFirstName().append(Contact.returnLastName().append(".html")));


                        //  add anchor tag for the links and loop through list of contacts

                        htmlBody.append(list.toString());
                        htmlBody.append(anchor.toString().append(anchor.getEndTag()));
                        htmlBody.append(anchor.addContent(Contact.returnFirstName().append(" ")
                                                                  .append(Contact.returnLastName())));

                        //  Close anchor tag
                        htmlBody.append(anchor.getEndTag());

                        //  Close list tag
                        htmlBody.append(list.getEndTag()).append("\n");

//                      Counter for Debugging
//                      counter++;
                        //   End for loop
                    }

//                    Counter for debugging
//    std::cout<<"Counter for loop: "<< counter;

    //  End ordered list
    htmlBody.append(orderedList.getEndTag()).append("\n");

    //  End body tag
    htmlBody.append(body.getEndTag()).append("\n");


//    Return completed html body

    return htmlBody;
}
std::string Index::to_string(){

    HTML= htmlHeader.append(htmlBody);


    return HTML;
}



