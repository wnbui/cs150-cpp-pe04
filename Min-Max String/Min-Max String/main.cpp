#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named minMaxStr() that accepts a string input parameter and two integer
// output parameters, min and max. Set min the ASCII value of the smallest alphabetical character
// and max to the largest. Only consider alphabetical characters. The return statement should
// return the real ratio of min to max. Make sure that the input string is not modified.

//
void minMaxStr(const string& str, int& min, int& max)
{
    // Set min to 127, the max ASCII value
    min = 127;
    // set max to 1, the min ASCII value
    max = 1;
    // loop through the str grabbing each individual char
        // check to make sure it's within range A-Z and a-z
        // compare its ASCII value to min and max
    for (size_t i{0}, len{str.size()}; i < len; ++i)
    {
        char c = str.at(i);
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (c < min)
            {
                min = c;
            }
            else if (c > max)
            {
                max = c;
            }
        }
    }
}

int main()
{
    int min, max;
    string str = "A0z";
    minMaxStr(str, min, max);
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
}
