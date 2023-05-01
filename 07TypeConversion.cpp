#include <iostream>

int main()
{
    //type conversion = conversion a value of one data type to another
    //     implicit = automatic
    //     explicit = precede value with new data type (int)

    double x = (int) 3.14;

    std::cout << x << "\n";

    // implicit example
    char y = 100;
    std::cout << y << "\n"; // this will display 'd' because ascii character with 100 as value is the character 'd'
    // explicit example
    std::cout << (char)100 << "\n"; // this will display 'd' as well

    // ----------------------
    int correct = 8;
    int questions = 10;
    double score  = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}