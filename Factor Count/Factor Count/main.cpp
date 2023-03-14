#include <iostream>
#include <string>
using namespace std;

// Write a function named factorCount() that accepts an integer (assumed to be positive) as its
// input parameter, returns a count of its positive factors in its output parameter, and returns the
// largest factor (not counting 1 or the number itself), via the return statement. For example, the
// eight factors of 24 are 1, 2, 3, 4, 6, 8, 12, and 24, so the call factorCount(24, fCount) should
// return 12 and set fCount to 8. If there are no factors other than 1 and the number itself (such as
// 3), return -1.

// Prototype
// int factorCount(int num, int& fCount);

int factorCount(int num, int& fCount)
{
    // max value or -1 if only 1 or num or none
    int result = -1;
    // total count of
    fCount = 0;
    // range is 1 to num (inclusive)
    for (int i = 1; i <= num; ++i)
    {
        // if num is divisible
        if (num % i == 0)
        {
            // greatest cannot be 1 or num (itself)
            if (i != num && i != 1)
            {
                result = i;
            }
            // increment count
            ++fCount;
        }
    }
    return result;
}

int main()
{
    int fCount;
    int val = factorCount(24, fCount);
    cout << "Largest factor is " << val << endl;
    cout << "Total factors are " << fCount << endl;
}
