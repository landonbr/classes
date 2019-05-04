#include <iostream>
#include "test.cpp"

using namespace std;

// defing second class within source code
class test2
{
    public:
    string x;

    void printsentence()
    {
        cout << x << " just messing around" << endl;
    }


};

// using scope resolution operator to access printname function from test.cpp
void test::printname()
{
    cout << "My name is " << name;
}
int main(){
    
    test obj;
    test obj2;
    test2 obj3;

    obj.name = "Landon";
    obj.age = 21;
    obj2.name = "Tessa";
    obj2.age = 20;
    obj3.x = "I am";

    obj.printname();

    obj.printage();
    cout << endl;

    obj2.printname();

    obj2.printage();
    cout << endl;

    obj3.printsentence();
    
    return 0;
}