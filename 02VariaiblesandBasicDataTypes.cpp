#include <iostream>

int main(){
//-----------------------------
    //INTEGER (whole numbers)
    int x;  //declare variable
    x = 5;  //assignment

    // or just be 
    // int x = 5;

    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    
    int age = 21;
    int year = 2023;
    int days = 7.5; // this will just be displayed as 7

    std::cout << days << '\n';

//-----------------------------
    //DOUBLE (number with decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << '\n';

//-----------------------------
    //CHAR (single character)
    char grade = 'A';
    char initial = 'BC';    // this will give an overflow warning 
                            //and just display the last character which is C
    char currency = '$';

    std::cout << initial << '\n';

//-----------------------------
    //BOOLEAN (true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

//-----------------------------
    //STRING (objects that represents a sequence of text)
    std::string name = "Wiru";
    std::string address = "123 sample st.";

    std::cout << name << '\n';
    std::cout << "You live at " << address  << "\n";

//TEST
    std::cout << "You are " << age << " years old";


    return 0;
}