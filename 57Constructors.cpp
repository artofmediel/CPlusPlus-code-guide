#include<iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    //constructor
     
    Student(std::string name, int age, double gpa){
    //Student(std::string x, int y, double z){
        // Note: in case that parameters are
        // of same name as the objects attributes
        // we pass values like this:
        this->name = name;
        this->age = age;
        this->gpa = gpa;
        
        //otherwise, theres no need to use "this->" if its different
        /*
        name = x;
        age = y;
        gpa = z;
        */
    }

};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        Car(std::string make, std::string model, int year, std::string color){
            this->make = make;
            this->model = model;
            this->year = year;
            this->color = color;
        }

};


int main()
{
    //constructors = special method that is automatically called when an object is instantiated
    //  useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";
    
    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n";
    
    std::cout << student3.name << "\n";
    std::cout << student3.age << "\n";
    std::cout << student3.gpa << "\n";

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    std::cout << car2.make << "\n";
    std::cout << car2.model << "\n";
    std::cout << car2.year << "\n";
    std::cout << car2.color << "\n";

    return 0;
}