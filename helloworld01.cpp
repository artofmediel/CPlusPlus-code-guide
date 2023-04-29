#include <iostream>

int main(){

    //This is a comment
    /*
        This is a
        multi-line
        comment
    */

    std::cout << "wiru like pizza!" << '\n'; // \n is better performance wise
    std::cout << "123 test" << std::endl;   // std::endl however will flush the output buffer
    return 0;
}