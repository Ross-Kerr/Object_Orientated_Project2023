project(Object_Orientated_Project2023)

set(HEADER_FILES
        Attribute.hpp
        Contact.hpp
        ContactLIst.hpp
        CSS.hpp
        Element.hpp
        fileReader.hpp
        Index.hpp
        Linked_Page.hpp
        Utility.hpp
        Website.hpp)

set(SOURCE_FILES
        Attribute.cpp
        Contact.cpp
        ContactLIst.cpp
        CSS.cpp
        Element.cpp
        fileReader.cpp
        Index.cpp
        Linked_Page.cpp
        Utility.cpp
        Website.cpp)

add_library(project_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})