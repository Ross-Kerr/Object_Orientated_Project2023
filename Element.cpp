//
// Created by rossk on 23/01/2023.
//

#include "Element.hpp"

Element::Element(std::string e) :e_{e} {

}

std::string Element::addAttribute(std::string aName, std::string aValue){
    class Attribute a(aName, aValue);
    Attribute.push_back(a);

}

std::string Element::toString() {
    htmlTag.append("<").append(e_);
    for (auto &t : Attribute) {
        htmlTag.append(" ");
        htmlTag.append(t.returnAttributeName().append("=\"").append(t.returnAttributeValue().append("\"")));
    }

    htmlTag.append(">");
    htmlTag.append(content_);

    return htmlTag;

}

std::string Element::addContent(std::string content) {
    content_ = content;
    return content_;
}

std::string Element::getEndTag() {
    return "</" + e_ + ">";
}


