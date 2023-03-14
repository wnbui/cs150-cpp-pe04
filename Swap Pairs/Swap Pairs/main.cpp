#include <iostream>
#include <string>
using namespace std;

// Write a function named swapPairs() that accepts a string reference as a parameter and
// modifies that string so that each pair of adjacent letters will be reversed. If the string has an
// odd number of letters, the last letter is unchanged. For example, if a string
// variable s stores "example", the call of swapPairs(s); should change the string to "xemalpe".
// If s had been "hello there", the call would produce "ehll ohtree".
// The function should return the number of "swaps" made. (Remember that there are three
// assignments involved in each swap.)

// Do not use any string functions from the standard library other than length() and at() or [].


// Prototype
// int swapPairs(string& str);

int swapPairs(string& str)
{
    int result = 0;
    size_t len{str.size()};
    
    // if size is odd, len - 1
    if (len % 2 == 1)
    {
        len -= 1;
    }
    
    // index for loop
    size_t i{0};
    
    while (i < len - 1)
    {
        // swap algo
            // storing a in temp
            // set a to b
            // set b to temp
        // set current index char to a temp
        char temp = str.at(i);
        // set current indext to next index's char
        str[i] = str[i + 1];
        // set next index char to temp
        str[i + 1] = temp;
        // increase counter
        ++result;
        // increment index by 2 to compare next 2 chars
        i += 2;
    }
    
    return result;
}

int swapPairs(string& str);

int main()
{
    string str = "Hello there";
    cout << "Actual:" << endl;
    cout << "swaps -> " << swapPairs(str) << " , str -> " << str << endl;
    cout << "Expected:" << endl;
    cout << "swaps -> 5 , str -> eHll ohtree" << endl;
}
