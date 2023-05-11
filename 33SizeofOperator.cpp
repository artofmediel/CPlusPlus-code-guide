#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //      variable, data type, class, objects, etc.

    std::string name = "wiru";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};


    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    
    //trick to get how many elements there are in an array
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";


    return 0;
}