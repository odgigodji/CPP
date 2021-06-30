cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_CXX_STANDARD 98)

add_executable(test
        test/test.cpp ../CPP00/ex01/Contact.cpp ../CPP00/ex01/Contact.hpp 1.cpp 2.cpp 4.cpp "intra/class_and_instance/1.cpp" "intra/class_and_instance/Sample.class.cpp" "intra/class_and_instance/Sample.class.hpp" ../CPP00/ex01/PhoneBook.cpp ../CPP00/ex01/PhoneBook.hpp)