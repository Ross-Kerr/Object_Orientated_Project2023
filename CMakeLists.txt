cmake_minimum_required(VERSION 3.23)
project(Object_Orientated_Project2023)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp project_lib/UnitTest.hpp doctests_tests/Tests.cpp)

add_executable(Object_Orientated_Project2023 main.cpp fileReader.cpp fileReader.hpp Contact.cpp Contact.hpp CSS.cpp CSS.hpp Attribute.cpp Attribute.hpp Element.cpp Element.hpp Linked_Page.cpp Linked_Page.hpp Index.cpp Index.hpp Website.cpp Website.hpp Utility.cpp Utility.hpp ContactLIst.cpp ContactLIst.hpp project_lib/UnitTest.cpp ${SOURCE_FILES})


include_directories(project_lib)
add_subdirectory(project_lib)
target_link_libraries(UnitTest_run project_lib)

add_subdirectory(doctests_tests)