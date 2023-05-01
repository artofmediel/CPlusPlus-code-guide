#include <iostream>

namespace first{
     int x = 1;   
}

namespace second{
    int x = 2;
    int y = 20;
}

namespace third{
    int y = 10;
}


int main() {

    //Namespace = provides a solution for preventing name conflicts
    //  in large projects. Each entity needs a unique name.
    //  A namespace allows for identically name entities
    //  as long as the namespaces are different.

    int x = 0;
    // this display the x value on main method
    std::cout << x << "\n";
    // this display the x value on the first namespace
    // :: is called scope resolution operator
    std::cout << first::x << "\n"; 
    // this display the x value on the second namespace
    std::cout << second::x << "\n"; 

    // there are cases where this line of code:
    using namespace third;
    // meaning, the program would automatically refer to the variable on that namespace
    // because the variable y is non present on the main function
    std::cout << y << "\n";
    std::cout << second::y << "\n";

    return 0;

}
