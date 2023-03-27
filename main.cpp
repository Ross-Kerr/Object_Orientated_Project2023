#include <iostream>
#include "Index.hpp"
#include "Website.hpp"
#include "CSS.hpp"
#include "Linked_Page.hpp"
#include "Element.hpp"
#include "fileReader.hpp"
namespace Testing{

    void testLinkedPage(){
        Linked_Page p;
        p.addParagraph("PatricioBigmore", "A Paragraph would go here!");
    }

    void testIndexPage(){
        Index i;
        Utility u;
        u.toDisk("index.html",i.to_string());
        i.addParagraph("index", "A Paragraph would go here!");
    }

    void testCSS(){
        CSS c;
        c.generateCSS();
    }

    void ElementTest() {

        Element e("p");
        e.addAttribute("Class", "container");
        e.addAttribute("id", "test");
        e.addContent("test");
        std::cout<<e.toString()<<e.getEndTag();
    }

    void UseCaseOne(){
        fileReader f;
        f.readFile();
    } //Use Case Passed

    void UseCaseTwo(){
        ContactLIst c;

        for(auto& Contact: c.returnContactVector()){
            std::cout<<Contact.returnFirstName()
            .append(Contact.returnLastName()
            .append(Contact.returnEmail()
            .append(Contact.returnCountry())));
        }

    } // Use Case Passed

    void UseCaseThree(){
        // Iterate through the vector and print the contact information for each contact
        ContactLIst cl;
        std::cout<<cl.findAndDisplay("80");

    } //Use Case Passed

    void UseCaseFour(){
        Index i;
        std::cout<<i.to_string();
    } // Use Case Passed

    void UseCaseFive(){
        Element e("p");
        Element a("a");
        e.addAttribute("Class", "container");
        e.addAttribute("id", "test");
        e.addContent("test");



        a.addAttribute("href","Link");
        a.addAttribute("id","test");
        a.addContent("Test");

        std::cout<<e.toString()<<e.getEndTag();
        std::cout<<("\n");
        std::cout<<a.toString()<<a.getEndTag();
    } //Use Case Passed

    void UseCaseSix(){
        Linked_Page li;
        std::cout<<li.to_string();
    } //Use Case Passed

    void UseCaseSeven(){
        Linked_Page p;
        p.addParagraph("PatricioBigmore", "A Paragraph would go here!");
    } //Use Case Passed

    void UseCaseEight(){
        CSS css;
        Index i;
        Linked_Page li;
        Utility u;

        css.generateCSS();
        u.toDisk("index.html",i.to_string());
        i.addParagraph("index", "A Paragraph would go here!");
        li.addParagraph("PatricioBigmore", "A Paragraph would go here!");

    } //Use Case Passed

    void RunAllUseCases(){
        UseCaseOne();
        UseCaseTwo();
        UseCaseThree();
        UseCaseFour();
        UseCaseFive();
        UseCaseSix();
        UseCaseSeven();
        UseCaseEight();
    }





}
int main() {

//        Testing::testCSS();
//        Testing::testIndexPage();
//        Testing::testLinkedPage();
//        Testing::ElementTest();
//        Testing::UseCaseOne();
//        Testing::UseCaseTwo();
        Testing::UseCaseThree();
//        Testing::UseCaseFour();
//        Testing::UseCaseFive();
//        Testing::UseCaseSix();
//        Testing::UseCaseSeven();
//        Testing::UseCaseEight();

    return 0;
}
