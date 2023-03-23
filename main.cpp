#include <iostream>
#include "Index.hpp"
#include "Website.hpp"
#include "CSS.hpp"
#include "Linked_Page.hpp"
#include "Element.hpp"
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



}
int main() {

        Testing::testCSS();
        Testing::testIndexPage();
        Testing::testLinkedPage();
//        Testing::ElementTest();

    return 0;
}
