#include <iostream>

int main(){
    //The const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything from modiying it
    // (read only)

    const double PI  = 3.14159;
    //other examples
    const int LIGHT_SPEED = 299792458;
    //screen resolution
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    // this is useful where making calculator programs
    // where some values are supposed to be constant 
    // and cant be altered

    //double PI = 123.45; 
    // will throw an error because PI is declared as const

    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";


    return 0;
}