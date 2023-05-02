#include <iostream>

int main()
{
    //ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;

    if(grade >=60)
    {
        std::cout << "You pass!\n";
    } else {
        std::cout << "You fail.\n";
    }

    // this can be written as

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail.\n";

    // tell if a number is odd or even
    int number = 9;
    number % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    // tell if a person is hungry
    bool hungry = true;
    hungry ? std::cout << "You are hungry\n" : std::cout << "You are full\n";
    // can also be written as
    hungry = false; // test if its false
    std::cout << (hungry ? "You are hungry\n" : "You are full\n");



    return 0;
}