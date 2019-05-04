// test class
// Filename: test.cpp 
#include <iostream>

// defining a class to perform certain functions
class test
{
    public: 
    int age; 
    std::string name;

    // prints name
    void printname();

    // prints age
    void printage()
    {
        std::cout << ", I am " << age << " years old";
    }
};

