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
