#include <iostream>

void walk(int steps);
int factorial(int num);

int main(){

    //recursion = a programming technique where a function
    //  invokes itself from within
    //  break a complex concept into a repeatable single step

    //  (iterate  vs recursive)

    // advantages = less code and is cleaner
    //      useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //      slower

    walk(100);

    std::cout << factorial(10);

    return 0;
}

// iterative approach
/*void walk(int steps){
    for(int i = 0; i < steps;i++){
        std::cout << "You take a step!\n";
    }
}*/

// recursive approach
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}

// iterative approach
/*int factorial(int num){
    int result = 1;
    for(int i = 1; i<= num; i++){
        result = result * i;
    }
    return result;
}*/

// recursive approach
int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    } else {
        return 1;
    }
}