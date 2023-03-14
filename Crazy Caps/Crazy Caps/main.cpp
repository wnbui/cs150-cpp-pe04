#include <iostream>
#include <string>
using namespace std;

// Write a function named crazyCaps() that accepts a string as a output parameter and changes
// that string to have its capitalization altered such that the characters at even indexes are al in
// lowercase and odd indexes are all in uppercase. For example, if a variable s stores "Hey!!
// THERE!", then the call of crazyCaps(s); should change s to store "hEy!! tHeRe!".

// Do not use any string functions from the standard library other than length() and at() or [].
// Remember that you can find the difference between upper and lowercase characters by
// subtracting 'A' from 'a'. Do not use the topper() or tolower() macros from cctype.

// Prototype
// string crazyCaps(string& str);

string crazyCaps(string& str)
{
    string result = "";
    // constant for conversion between upper and lower
    const int kDiff = 'a' - 'A';
    
    for (size_t i{0}, len{str.size()}; i < len; ++i)
    {
        char c = str.at(i);
        // odd indexes, check if lowercase, if not, convert to upper
        if (i % 2 == 1 && c >= 'a' && c <= 'z')
        {
            str[i] = c - kDiff;
        }
        // even indexes, check if uppercase, it not, convert to lower
        else if (i % 2 == 0 && c >= 'A' && c <= 'Z')
        {
            str[i] = c + kDiff;
        }
    }
    return str;
}

string crazyCaps(string& str);

int main()
{
    string str = "Hello there";
    cout << "Actual:" << endl;
    cout << "str -> " << crazyCaps(str) << endl;
    cout << "Expected:" << endl;
    cout << "str -> hEy!! tHeRe!" << endl;
}
