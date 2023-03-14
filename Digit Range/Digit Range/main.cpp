#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named digitRange() that accepts an integer as an input parameter and returns
// the range of values of its digits. The range is defined as 1 more than the difference between the
// largest and smallest digit value. For example, the call digitRange(68437) would return 6
// because the largest digit value is 8 and the smallest is 3, so 8 - 3 + 1 = 6. If the number
// contains only one digit, return 1. Solve this problem without using a string.

// Prototype
// int digitRange(int num);

int digitRange(int num)
{
    int range = 0;
    // start max at -1
    int max = -1;
    // start min at 10, since digit can be no larger than 9
    int min = 10;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        if (digit > max)
        {
            max = digit;
        }
        if (digit < min)
        {
            min = digit;
        }
        num /= 10;
    }
    range = max - min + 1;
    return range;
}

int main()
{
    int num, result;
    cout << "Enter a number: ";
    cin >> num;
    result = digitRange(num);
    cout << "The range is " << result << endl;
}
