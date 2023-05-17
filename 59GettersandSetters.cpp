#include<iostream>

class Stove{
    private:
        int temperature = 0;
    public:
        
    Stove(int temperature){
        setTemperature(temperature);
    }

    //GETTER
    int getTemperature(){
        return temperature;
    }
    //SETTER
    void setTemperature(int temperature){
        //limit temperature within range of 0 - 10
        if(temperature < 0){
            this->temperature = 0;
        } else if(temperature >= 10){
            this->temperature = 10;
        } else {
            this->temperature = temperature;
        }

    }
};


int main()
{
    // abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove(0);

    stove.setTemperature(-4);
    std::cout << "The temperature setting is: " << stove.getTemperature() <<"\n";

    stove.setTemperature(5);
    std::cout << "The temperature setting is: " << stove.getTemperature() <<"\n";

    stove.setTemperature(1000000);
    std::cout << "The temperature setting is: " << stove.getTemperature() <<"\n";

    return 0;
}