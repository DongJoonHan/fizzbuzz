#include "hiker.h"

int answer()
{
    return 6 * 7;
}

int sum(int i, int j)
{
    return i + j;
}

int calcFizzBuzz(int inputNumber)
{
    int result = 0;
    
    if((inputNumber % 3) == 0)
        result = 300;
    else
        result = inputNumber;
    
    return result;
}