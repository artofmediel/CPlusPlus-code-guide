#include <iostream>

int main()
{
    // &&   = check if two conditions are true
    // ||   = check if at least one of two conditions are true
    // !    = reverses the logical state of its operand

    int temp;

    // using and operator
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30)
    {
        std::cout << "Temperature is good!\n";
    }
    else
    {
        std::cout << "Temperature is bad.\n";
    }

    // using or operator
    if(temp <= 0 || temp >= 30)
    {
        std::cout << "Temperature is bad.\n";
    }
    else
    {
        std::cout << "Temperature is good!\n";
    }

    // using not operator
    bool sunny = false;

    if(!sunny)
    {
        std::cout << "It is sunny outside!\n";
    }
    else
    {
        std::cout << "It is cloudy outside.\n";
    }

    return 0;
}