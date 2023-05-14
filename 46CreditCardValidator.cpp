#include<iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumevenDigits(const std::string cardNumber);


int main()
{
    //Luhn algorithm
    //1. Double every second digit from right to left
    //  if doubled number is 2 digits, split them
    //2. Add all single digits from step 1
    //3. Add all odd numbered digits from right to left
    //4. Sum results from steps 2 & 3
    //5. If step 4 is divisible by 10, # is valid

    //example : 6011000990139424
    //6011   0009    9013    9424
    //6 1    0 0     9 1     9 2
    //12 2   0 0     18 2    18 4  step 1
    //1 2 2  0 0     1 8 2   1 8 4 step 1: split
    //1+2+2+0+0+1+8+2+1+8+4 = 29  step 2
    // 0 1    0 9     0 3     4 4 step 3
    //0+1+0+9+0+3+4+4= 21 step 4
    //29 + 21 = 50 % 10 = true = valid

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumevenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid.";
    }
    else
    {
        std::cout << cardNumber << " is not valid.";
    }

    return 0;
}


int getDigit(const int number){
    
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    
    for(int i = cardNumber.size() -1; i >= 0; i-=2){
        sum += cardNumber[i]- '0';
    }

    return sum;
}

int sumevenDigits(const std::string cardNumber){
    
    int sum = 0;
    
    for(int i = cardNumber.size() -2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i]- '0')*2);
    }

    return sum;
}