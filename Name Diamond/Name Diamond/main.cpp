#include <iostream>
#include <string>
using namespace std;

// Write a function named nameDiamond() that accepts a string as an input parameter and returns a
//new string in a "diamond" format as shown below. For example, the call of

//              string s = nameDiamond("MARTY");

//should return a string with embedded newlines, that looks like this when printed. Use \n for the
//embedded newlines. The last line should end with a newline.

// Prototype
// string nameDiamond(const string& str);

string nameDiamond(const string& str)
{
    string result = "";
    // 2 nested for loops
    size_t len{str.size()}; // size of str
    size_t i{0}; // index
    // upper diamond
    // must use while loop for this to work
    // bounds from i to len
    // loop that prints a substring of i length increasing by 1 followed by \n
    while (i < len)
    {
        result += str.substr(0, i + 1) + "\n";
        ++i;
    }
    // lower diamond
    // loop that adds a space after ever iteration
    // substring prints from index 1 til the end and stats 1 index higer after every loop
    while (i > 0)
    {
        // loop for the amount of space printed after each iteration increases by 1
        size_t numSpaces{len - i + 1};
        for (size_t i{0}; i < numSpaces; i++)
        {
            result += " ";
        }
        // substring starting at 1 index greater after each iteration
        result += str.substr(len - i + 1) + "\n";
        --i;
    }
    return result;
}

string nameDiamond(const string& str);

int main()
{
    string s = nameDiamond("WILLIAM");
    cout << s << endl;
}
