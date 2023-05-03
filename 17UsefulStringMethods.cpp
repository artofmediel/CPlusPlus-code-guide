#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length
    if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters.\n";
    }
    // .empty
    else if(name.empty()){
        std::cout << "You didn't enter your name.\n";
    }
    else{
        std::cout << "Welcome " << name << "\n";
    }

    // .insert
    name.insert(0, "@");
    std::cout << name << "\n";

    // .erase
    name.erase(0, 3);
    std::cout << name << "\n";

    // .append
    name.append("@gmail.com");
    std::cout << "Your username is now " << name << "\n";

    // .at
    std::cout << "Character at index is: " << name.at(0) << "\n";

    // .clear
    name.clear();
    std::cout << "Hello" << name << "\n";

    // .find
    std::cout << name.find('u');

    return 0;
}