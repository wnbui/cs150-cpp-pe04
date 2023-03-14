#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named swapDigitPairs() that accepts a positive integer n as an input-output
// parameter which is changed to a new value similar to n's but with each pair of digits swapped in
// order. For example:
//      int n = 482596;
//      int old = swapDigitPairs(n);
//      cout << "n -> " << n << " , old -> " << old << endl;
// This returns 482597 but changes n to 845269. Notice that the 9 and 6 are swapped, as are the 2
// and 5, and the 4 and 8. If the number contains an odd number of digits, leave the leftmost digit
// in its original place. For example:
//      int n = 1234567;
//      int old = swapDigitPairs(n);
//      cout << "n -> " << n << " , old -> " << old << endl;
// This converts n into 1325476. Solve this problem without using a string.

// Prototype
// int swapDigitPairs(int num);

int swapDigitPairs(int num)
{
    if (num < 10)
    {
        return num;
    }
    else{
        // grab right two most digits
        int digits = num % 100;
        // swap the digits
            // mod 10 to grab right digit times 10 to make it in the tens places (moving it left)
            // divide digit by 10 to grab the left digit and add back to digits to complete swap
        digits = (digits % 10) * 10 + (digits / 10);
        // recursively call the function
            // move that number over two places by multiplying by 100
            // add digits that was swapped to the right end
        return swapDigitPairs(num / 100) * 100 + digits;
    }
}

int main()
{
    int n = 482596;
    int old = swapDigitPairs(n);
    cout << "n -> " << n << " , old -> " << old << endl;
    n = 1234567;
    old = swapDigitPairs(n);
    cout << "n -> " << n << " , old -> " << old << endl;
}
