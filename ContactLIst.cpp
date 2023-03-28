//
// Created by rossk on 30/01/2023.
//

#include "ContactLIst.hpp"
#include "fileReader.hpp"
#include "Contact.hpp"
#include "Utility.hpp"

ContactLIst::ContactLIst() {
    fileReader f;
    Utility u;
    f.readFile();
    for (auto e : f.getContent()){
        Contact c (u.tokenize(e));
        ContactVector.push_back(c);
    }
}

std::vector<Contact> ContactLIst::returnContactVector(){
    return ContactVector;
}

std::string ContactLIst::findAndDisplay(std::basic_string<char> ID) {
    std::string message{"target ID: "};
    message.append(ID);
    message.append("\n");

    auto index_ = std::find_if(ContactVector.begin(), ContactVector.end(), [&](Contact& c) { return c.returnID() == ID; });

    if (index_ == ContactVector.end()) {
        message.append(" not found in vector \n");
        throw std::invalid_argument(message);
    } else {
        message.append("ID: ");
        message.append(index_->returnID());
        message.append("\n");
        message.append(index_->returnFirstName());
        message.append("\n");
        message.append(index_->returnLastName());
        message.append("\n");
        message.append(index_->returnCountry());
        message.append("\n");
        message.append(index_->returnEmail());
    }
    return message;
}

