#include <iostream>

int main()
{
    //fill() = fills a range of elements with a specified value
    //      fill(begin, end, value)

    const int SIZE = 100;
    std::string foods[SIZE];

    //fill all of the array
    //fill(foods, foods + SIZE, "pizza");

    //fill half of the array
    //fill(foods, foods + (SIZE/2), "pizza");
    //fill(foods + (SIZE/2), foods + SIZE, "hamburgers");

    const int SIZETHIRDS = 99;
    //fill  thirds of the array
    fill(foods, foods + (SIZETHIRDS/3), "pizza");
    fill(foods + (SIZETHIRDS/3), foods + (SIZETHIRDS/3)*2, "hamburgers");
    fill(foods + (SIZETHIRDS/3)*2, foods + SIZETHIRDS, "hotdog");

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}