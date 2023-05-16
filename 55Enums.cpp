#include<iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
          thursday = 4, friday = 5, saturday = 6};

enum Flavor {vanilla, chocolate, strawberry, mint};
// if you dont assign integer value to each items of enum
// you implicitly assign 0, 1, 2, 3, ... to it

int main()
{
    // enums - a user-defined data-type that consists 
    //      of paired named integer constants.
    //      Great if you have a set of potential options

    Day today = sunday;
    
    switch(today){
        case sunday: std::cout << "It's Sunday!\n";
            break;
        case monday: std::cout << "It's Monday!\n";
            break;
        case tuesday: std::cout << "It's Tuesday!\n";
            break;
        case wednesday: std::cout << "It's Wednesday!\n";
            break;
        case thursday: std::cout << "It's Thursday!\n";
            break;
        case friday: std::cout << "It's Friday!\n";
            break;
        case saturday: std::cout << "It's Saturday!\n";
            break;
    }

    //can also work like this
    /*
    switch(today){
        case 0: std::cout << "It's Sunday!\n";
            break;
        case 1: std::cout << "It's Monday!\n";
            break;
        case 2: std::cout << "It's Tuesday!\n";
            break;
        case 3: std::cout << "It's Wednesday!\n";
            break;
        case 4: std::cout << "It's Thursday!\n";
            break;
        case 5: std::cout << "It's Friday!\n";
            break;
        case 6: std::cout << "It's Saturday!\n";
            break;
    }*/

    return 0;
}