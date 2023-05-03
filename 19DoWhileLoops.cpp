#include <iostream>

int  main()
{
    //do while loop = do some block of code first,
    //  Then repeat again if condition is true

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "This # is: " << number;

    return 0;
}