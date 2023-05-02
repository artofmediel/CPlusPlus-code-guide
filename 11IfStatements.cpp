#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    if(age>=100) {
        std::cout << "Too old.";
    }
    else if(age >= 18)
    {
        std::cout << "Welcome!";
    }
    else if(age<0) {
        std::cout << "Not born yet?";
    }
    else
    {
        std::cout << "Not old enough to enter!";
    }

    return 0;
}