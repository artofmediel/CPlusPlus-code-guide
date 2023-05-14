#include<iostream>

//pass by value
//void swap(std::string x, std::string y);

//pass by reference
void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-aid";
    std::string y = "Water";

    swap(x,y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

//pass by value
/*void swap(std::string x, std::string y){
    std::string temp;

    temp = x;
    x = y ;
    y = temp;

}*/

//pass by reference
void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y ;
    y = temp;

}