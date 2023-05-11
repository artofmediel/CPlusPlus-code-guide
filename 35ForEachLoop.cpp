#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    //      iterable data set
    //  if you just need to display the elements of an array, 
    //  this is the best loop option you can do

    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for(std::string student : students)
    {
        std::cout << student << '\n';
    }

    //--------------------------------------------------

    int grades[] = {65, 72, 81, 93};

    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }

    return 0;

}