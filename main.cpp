#include <iostream>
#include "Index.hpp"
#include "Website.hpp"
#include "CSS.hpp"
#include "Linked_Page.hpp"
#include "Element.hpp"
#include "fileReader.hpp"
#include "ContactLIst.hpp"
#include "Contact.hpp"
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

    }
    void UseCaseTwo(){
        ContactLIst Cl;

    }
    void UseCaseThree(){
//        Contact c;

    }
    void UseCaseFour(){
        Index i;
        i.to_string();
    }



}
int main() {

//        Testing::testCSS();
//        Testing::testIndexPage();
//        Testing::testLinkedPage();
//        Testing::ElementTest();
//        Testing::UseCaseOne();
        Testing::UseCaseTwo();

    return 0;
}
