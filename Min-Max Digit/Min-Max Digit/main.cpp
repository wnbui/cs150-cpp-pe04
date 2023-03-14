#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named minMaxDigit() that accepts an integer as an input parameter and
// returns the largest and smallest digits using the two output parameters min and max. For
// example, the call minMaxDigit(68437, min, max) would set min to 3 and max to 8. If there is
// only one digit, then both min and max are set to the same value. The function has no return
// statement.

// Prototype
// int minMaxDigit(int num, int& min, int& max);

void minMaxDigit(int num, int& min, int& max)
{
    // min will always be less than 10
    min = 10;
    // max will always be more than -1
    max = -1;
    int digit;
    
    while (num > 0)
    {
        digit = num % 10;
        if (digit < min)
        {
            min = digit;
        }
        if (digit > max)
        {
            max = digit;
        }
        num /= 10;
    }
}

int main()
{
    int min, max;
    minMaxDigit(68437, min, max);
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
}
