#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random = Not truly random (but close)

    srand(time(NULL));

    //set a random generator(range: 1-6) for a dice roll
    int num = (rand() % 6)+1;
    //display
    std::cout << num << "\n";

    //set a random generator(range: 1-100) for a 
    //100-sided dice roll but 3 dices
    int num1 = (rand() % 100)+1;
    int num2 = (rand() % 100)+1;
    int num3 = (rand() % 100)+1;
    //display
    std::cout << num1<< "\n";
    std::cout << num2<< "\n";
    std::cout << num3<< "\n";

    return 0;
}