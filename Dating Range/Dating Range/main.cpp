#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named datingRange() that accepts three parameters: an integer input
// parameter for a person's age, and two integer output parameters for a minimum and maximum.
// The function should fills the min/max integers with the person's xkcd "dating range" as
// described in the following web comic strip:

// Your minimum xkcd dating age is half your own age plus 7. Your maximum xkcd dating range
// is your own age, minus 7, then doubled. For example, the call datingRange(48, min, max);
// sets min to 31 and max to 82. You may assume that the age value passed is a non-negative
// integer.

// Prototype
// int datingRange(int age, int min, int max);

void datingRange(int age, int& min, int& max)
{
    min = (age / 2) + 7;
    max = (age - 7) * 2;
}

int main()
{
    int min;
    int max;
    datingRange(48, min, max);
    cout << "min = " << min << ", max = " << max << endl;
}
