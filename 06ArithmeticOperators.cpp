#include <iostream>

int main(){

    //arithmetic operators = return the result of a specific
    //  arithmetic operation ( + - * / )

    int students = 21;

    // ADDING-----------------------
    //students = students + 3;
    // can be rewritten as
    //students += 3;
    // or increment if you are only adding 1 to the value
    //students++;

    // SUBTRACT---------------------
    //students = students - 1;
    //students -= 1;
    // or decrement if you are only subtracting 1 to the value
    //students--;

    // MULTIPLY---------------------
    //students = students * 2;
    //students *= 2;

    // DIVIDE-----------------------
    //students = students / 2;
    students /= 3;

    // modulus( % ) divide the number and gets the value of the remainder
    int remainder = students % 2;

    std::cout << students << "\n";

    std::cout << remainder << "\n";

    // ORDER-----------------------
    int result = 6-(5+4)*3/2;

    std::cout << result << "\n";

    return 0;
}