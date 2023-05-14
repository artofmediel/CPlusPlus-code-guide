#include <iostream>

int main()
{
    //memory address = a location in memory where data is stored
    //a memory address can accessed with & (address of operator)

    std::string name = "wiru";
    int age = 28;
    bool student = false;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}