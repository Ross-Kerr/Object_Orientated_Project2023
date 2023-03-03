#include <iostream>
#include "fileReader.hpp"
#include "ContactLIst.hpp"
#include "Contact.hpp"
#include "Index.hpp"
#include "Website.hpp"
#include "CSS.hpp"
#include "Linked_Page.hpp"
#include <vector>
#include <regex>
#include "Element.hpp"
namespace Testing{

    void testLinkedPage(){
        Linked_Page p;
        std::cout<<p.to_string();

    }

    void testIndexPage(){
        Index i;
        std::cout<<i.to_string();

    }

    void testCSS(){
        CSS c;
        c.generateCSS();

    }

    void ElementTest();
    Element e ("p");
    e.addAttribute("Class", "container");
    e.addAttribute("id", "test");
    e.addContent("test");

    std::cout << e.toString() << e.getEndTag();


}
int main() {

//    std::cout<<Testing::testCSS;
//    std::cout<<Testing::testIndexPage;
//    std::cout<<Testing::testLinkedPage;





    return 0;
}
