#include<iostream>

int main()
{
    //dynamiic memory = memory that is allocated after the program
    //      is already compiled & running
    //      use the 'new' operator to allocate
    //      memory in the heap rather than the stack

    //      useful when we don't know how much memory
    //      we will need. makes our programs more flexible,
    //      especially when accepting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 28;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';


    // whenever you use new operator, you should use delete 
    // to avoid memory leak and free heap space
    delete pNum;

    //---------------------------------------------------------
    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in? : ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i=0;i<size;i++){
        std::cout << "Enter grade #"<< i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i=0;i<size;i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}