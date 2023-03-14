#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function strToLeet() that accepts an input-output string parameter and converts the
// string to (or from) "leet speak" (aka 1337 speak), an internet dialect where various letters are
// replaced by other letters/numbers. The second, bool parameter, with a default value of true,
// will determine whether to translate to leet or to English. Return the converted string.

//          Original character 'Leet' character
//          o                               0
//          l (lowercase L)                 1
//          e                               3
//          a                               4
//          t                               7
//          s (at the end of a word only)   Z

// Prototype
// string strToLeet(string& str, bool flag = true);

string strToLeet(string& str, bool flag = true)
{
    // if true, convert from original to leet
    if (flag)
    {
        for (size_t i{0}, len{str.size()}; i < len; ++i)
        {
            char c = str[i];
            if (c == 'o')
            {
                str[i] = '0';
            }
            else if (c == 'l')
            {
                str[i] = '1';
            }
            else if (c == 'e')
            {
                str[i] = '3';
            }
            else if (c == 'a')
            {
                str[i] = '4';
            }
            else if (c == 's' && i == len - 1)
            {
                str[i] = 'Z';
            }
        }
    }
    // else false, convert from leet to original
    else
    {
        for (size_t i{0}, len{str.size()}; i < len; ++i)
        {
            char c = str[i];
            if (c == '0')
            {
                str[i] = 'o';
            }
            else if (c == '1')
            {
                str[i] = 'l';
            }
            else if (c == '3')
            {
                str[i] = 'e';
            }
            else if (c == '4')
            {
                str[i] = 'a';
            }
            else if (c == 'Z' && i == len - 1)
            {
                str[i] = 's';
            }
        }
    }
    return str;
}

int main()
{
    string str = "all four score ands";
    cout << strToLeet(str) << endl;
    cout << str << endl;
    cout << strToLeet(str, false) << endl;
    cout << str << endl;
}
