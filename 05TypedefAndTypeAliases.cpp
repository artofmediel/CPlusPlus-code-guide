#include <iostream>
#include <vector>


typedef std::vector<std::pair<std::string, int>> pairlist_t;
//another example
//typedef std::string text_t;
//typedef int number_t;
// these typedef was then replaced by 'using'
//  replaced with 'using' (work better w/ templates)
using text_t = std::string;
using number_t = int;


int main(){

    //typedef = reserved keyword used to create an additional name
    //  (alias) for another data type.
    //  New identifier for an existing type
    //  Helps with readability and reduces typos
    //  NOTE: use when there is a clear benefit


    // so instead of typing this to declare a pairlist:
    //std::vector<std::pair<std::string, int>> pairlist;
    //we make use of the typedef:
    pairlist_t pairlist;
    // ---------------------------------------------------

    text_t firstName = "wiru";
    number_t age = 28;

    std::cout << firstName << "\n";
    std::cout << age << "\n";
    return 0;

}