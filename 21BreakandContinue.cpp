#include <iostream>

int main()
{

    for(int i =1; i <=20; i++)
    {
        // break = break out of a loop
        //if(i == 13) {
        //    break;
        //}
        // continue = skip current iteration
        if(i == 15) {
            continue;
        }
        std::cout << i << "\n";

    }

    return 0;

}