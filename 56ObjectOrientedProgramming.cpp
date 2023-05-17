#include<iostream>

class Human{

    //attributes
    public:
        //std::string name;
        //std::string occupation;
        //int age;

        //set default values
        std::string name= "rick";
        std::string occupation= "scientist";
        int age = 70;

        //methods
        void eat(){
            std::cout << "This person is eating.\n";
        }

        void drink(){
            std::cout << "This person is drinking.\n";
        }

        void sleep(){
            std::cout << "This person is sleeping.\n";
        }
        
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas.\n";
        }

        void brake(){
            std::cout << "You step on the brakes.\n";
        }
};


int main()
{
    //object - a collection of attributes and methods
    //      They can have characteristics and could perfrom actions
    //      can be used to mimic real world items
    //      created from a class which acts as a "blue-print"
    
    Human human1;
    Human human2;

    std::cout << human1.name <<"\n";
    std::cout << human1.occupation <<"\n";
    std::cout << human1.age <<"\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.name = "morty";
    human2.occupation = "student";
    human2.age  = 15;

    std::cout << human2.name <<"\n";
    std::cout << human2.occupation <<"\n";
    std::cout << human2.age <<"\n";

    human2.eat();
    human2.drink();
    human2.sleep();

    //-----------------------------------
    Car car1;

    car1.make = "ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    std::cout << car1.make <<"\n";
    std::cout << car1.model <<"\n";
    std::cout << car1.year <<"\n";
    std::cout << car1.color <<"\n";

    car1.accelerate();
    car1.brake();

    return 0;

}