#include<iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

//void printCar(Car car);
void printCar(Car &car);

void paintCar(Car &car,std::string color);


int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    //this shows that they have different memory address meaning,
    //std::cout << &car1 << '\n';
    // passing a struct makes the copy of the original
    // To work with the values of the original struct for example,
    // instead of : void printCar(Car car){...} on the fucntion
    // use : void printCar(Car &car){...} 
    // make use of the '&' - Address Of Operator
    

    printCar(car1);
    paintCar(car1, "silver");
    printCar(car1);
    
    printCar(car2);
    paintCar(car2, "gold");
    printCar(car2);
    
    return 0;
}

//void printCar(Car car){
void printCar(Car &car){
    //this shows that they have different memory address meaning,
    std::cout << &car << '\n';
    // passing a struct makes the copy of the original

    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car,std::string color){
    car.color = color;
}