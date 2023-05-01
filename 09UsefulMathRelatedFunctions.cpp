#include <iostream>

#include <cmath>

int main()
{
    double x = 3;
    double y = 4;
    double z;

    double a = 3.14159;

    // get max value
    z = std::max(x,y);
    std::cout << "max : " << z << "\n";

    // get min value
    z = std::min(x,y);
    std::cout << "min : " << z << "\n";

    // power
    z = pow(2, 4);  //2*2*2*2
    std::cout << "2 to the power of 4 is : " << z << "\n";

    // squareroot
    z = sqrt(9);
    std::cout << "square root of 9 : " << z << "\n";
    
    // absolute value
    z = abs(-3);
    std::cout << "absolute value of -3 is : " << z << "\n";

    // round
    z = round(a);
    std::cout << a << " rounded is : " << z << "\n";

    // ceil - always round up
    z = ceil(a);
    std::cout << a << " ceiling is : " << z << "\n";

    // floor - always round down
    z = floor(a);
    std::cout << a << " floor is : " << z << "\n";

    //https://www.cplusplus.com/reference/cmath/
    
    return 0;
}