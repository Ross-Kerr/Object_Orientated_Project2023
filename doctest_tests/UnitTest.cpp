//
// Created by rossk on 28/03/2023.
//
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "fileReader.hpp"
#include "CSS.hpp"

TEST_CASE("Test File Reader and Content Getter"){

    // Create an instance of the fileReader Class
    fileReader f;

    // Test that the getContent() method returns an empty vector before readFile() is called
    CHECK(f.getContent().empty());

    // Call the readFile() method to read the content of the "contacts.txt" file
    f.readFile();

    // Test that the getContent() method returns a non-empty vector after readFile() is called
    CHECK(!f.getContent().empty());

    // Test that the first line of the file was read correctly
    CHECK(f.getContent()[0] == "899,Patricio,Bigmore,pbigmoreoy@usnews.com,Portugal");

    std::cout << "All test passed\n";
}




TEST_CASE("CSS generation") {

    // Create an instance of the CSS Class
    CSS css;

    // Create an expected CSS String
    std::string expected_css = "/* Set font properties */\n"
                               "body {\n"
                               "font-family: Arial, sans-serif;\n"
                               "font-size: 16px;\n"
                               "background-color: aliceblue;\n"
                               "}\n"

                               "header{\n"
                               "background-color: darkcyan;\n"
                               "}\n"
                               "/* Set link styles */\n"
                               "a {\n"
                               "color: #3366cc;\n"
                               "text-decoration: none;\n"
                               "}\n"

                               "a:hover {\n"
                               "text-decoration: underline;\n"
                               "}\n"

                               "/* Set list styles */\n"
                               "ul {\n"
                               "list-style-type: none;\n"
                               "padding: 0;\n"
                               "margin: 0;\n"
                               "}\n"

                               "li {\n"
                               "margin-bottom: 10px;\n"
                               "}\n"

                               "/* Add some spacing between links */\n"
                               "li a {\n"
                               "margin-right: 10px;\n"
                               "}\n";

    std::string actual_css = css.generateCSS();
    CHECK(actual_css == expected_css);

    std::cout << "CSS test has passed";

}
