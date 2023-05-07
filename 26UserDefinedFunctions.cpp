#include <iostream>

void happyBirthday(std::string name, int age);
//can be declared then defined after the main
//void happyBirthday()
//{
//    std::cout << "Happy Birthday!\n";
//}


int main()
{
    //function = is a block of reusabale code

    std:: string name = "wiru";
    int age = 28;

    happyBirthday(name, age);

    return 0;

}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";
}