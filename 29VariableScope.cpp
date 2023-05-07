#include <iostream>

void printNum();
int myNum = 3; //global variable

int main()
{
    //local variable = declared inside of a function or block ()
    //global variable = declared outside of all functions

    int myNum = 1; //local variable
    
    std::cout << myNum << "\n";

    printNum();

    // :: scope resolution operator ; will display global value 3
    std::cout << ::myNum << "\n";

    return 0;
}

void printNum(){
    int myNum = 2; //local variable
    std::cout << myNum << "\n";
}