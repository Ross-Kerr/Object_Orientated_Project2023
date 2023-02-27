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
namespace Testing{

    int testLinkedPage(){
        Linked_Page p;
        std::cout<<p.to_string();
    }

    int testIndexPage(){
        Index i;
        std::cout<<i.to_string();
    }

    int testCSS(){
        CSS c;
        std::cout<<c.generateCSS();
    }


}
int main() {

    std::cout<<Testing::testCSS;



    return 0;
}
