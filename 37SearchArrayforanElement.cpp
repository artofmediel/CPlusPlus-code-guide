#include <iostream>

//int searchArray(int array[],int size,int element);
int searchFoodArray(std::string array[],int size,std::string element);

int main()
{
    int index;
    
    //int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //int size = sizeof(numbers)/sizeof(numbers[0]);
    //int myNum;

    /*std::cout << "Enter element to search for: " << "\n";
    *std::cin >> myNum;
    *
    *index = searchArray(numbers,size,myNum);
    *
    *if(index != -1){
    *    std::cout << myNum << " is at index " << index << "\n";
    *}else{
    *    std::cout << myNum << " is not in the array" << "\n";
    *}
    */

    // -----------------------------------------------

    std::string foods[] = {"pizza", "hamburger", "hotdog", "fries", "ice cream"};
    int foodsize = sizeof(foods)/sizeof(foods[0]);
    std::string myFoods;

    std::cout << "Enter food to search for: " << "\n";
    std::getline(std::cin, myFoods);

    index = searchFoodArray(foods,foodsize,myFoods);

    if(index != -1){
        std::cout << myFoods << " is at index " << index << "\n";
    }else{
        std::cout << myFoods << " is not in the array" << "\n";
    }

    return 0;
}

/*int searchArray(int array[],int size,int element)
*{
*    for(int i = 0; i < size; i ++){
*        if(array[i] ==  element){
*            return i;
*        }
*    }
*
*    return -1;
*}
*/

int searchFoodArray(std::string array[],int foodsize,std::string element)
{
    for(int i = 0; i < foodsize; i ++){
        if(array[i] ==  element){
            return i;
        }
    }

    return -1;
}