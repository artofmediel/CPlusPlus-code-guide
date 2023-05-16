#include<iostream>

/*
int max(int x, int y){
    return (x > y) ? x : y;
    //is x greater than y ? if yes, return x : if not, return y;
}
double max(double x, double y){
    return (x > y) ? x : y;
    //is x greater than y ? if yes, return x : if not, return y;
}
char max(char x, char y){
    return (x > y) ? x : y;
    //is x greater than y ? if yes, return x : if not, return y;
}
*/

// function template goes like this
template <typename T, typename U>
auto max(T x, U y){
    return (x > y) ? x : y;
    //is x greater than y ? if yes, return x : if not, return y;
}

int main()
{
    //function template = describes what a function looks like.
    //      can be iised to generate as many overloaded functions
    //      as needed, each using different data types

    std::cout << max(1,2) << '\n';
    
    std::cout << max(1.1,2.1) << '\n';
    
    std::cout << max('1','2') << '\n';


    //will throw an error if the 2 variables are of different data type
    // to fix this instead of just : 
    // template <typename T>
    // add another typename for the other variable : 
    // auto <typename T, typename U>
    
    std::cout << max(1,2.1) << '\n';


    return 0;
}

