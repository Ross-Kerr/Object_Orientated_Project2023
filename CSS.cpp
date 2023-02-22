//
// Created by rossk on 23/01/2023.
//

#include "CSS.hpp"
#include <iostream>

CSS::CSS() {
    CSS_ = "";
}

std::string CSS::generateCSS(){

    CSS_.append("/* Set font properties */\n"
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
                "}\n"
    );

    return CSS_;
}

