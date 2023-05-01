#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;


    std::cout << "What's your full name?: ";
    // this getline acknowledge spaces on a string input
    std::getline(std::cin >> std::ws, name);
    // std::ws gets rid of the white spaces and newline characters
    
   
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old. \n";

    return 0;
}