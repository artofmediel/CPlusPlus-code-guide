#include<iostream>

int main()
{
    // pointers = variable that stores a memory address of another variable
    //      sometimes it's easier to work with an address

    // & address of operator
    // * dereference operator

    std::string name = "wiru";
    int age = 28;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    //pointers
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;
    
    //display
    std::cout << pName << '\n';
    std::cout << *pName << '\n';

    std::cout << *pAge << '\n';

    std::cout << freePizzas << '\n';
    std::cout << pFreePizzas << '\n';
    std::cout << *pFreePizzas << '\n';


    return 0;
}