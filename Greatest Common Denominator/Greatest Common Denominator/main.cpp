#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named gcd() that accepts two integers as input parameters and returns the
// greatest common divisor of the two numbers. The greatest common divisor (GCD) of two
// integers, a and b, is the largest integer that is a factor of both a and b. The GCD of any number
// and 1 is 1, and the GCD of any number and 0 is that number.

// One efficient way to compute the GCD of two numbers is to use Euclid's algorithm, which states
// the following:
//                  GCD(A, B) = GCD(B, A % B)
//                  GCD(A, 0) = Absolute value of A

// In other words, if you repeatedly take the remainder of A divided by B and then swap the two
// values, eventually B will store 0 and A will store the greatest common divisor.

// For example: gcd(24, 84) returns 12, gcd(105, 45) returns 15, and gcd(0, 8) returns 8.

// Prototype
// int gcd(int a, int b);

int gcd(int a, int b)
{
    // GCD(A, 0) = Absolute value of A
    if (b == 0)
    {
        return a;
    }
    else
    {
        // GCD(A, B) = GCD(B, A % B)
        return gcd(b, a % b);
    }
}

int main()
{
    cout << "Actual " << gcd(24, 84) << " : Expected 12" << endl;
    cout << "Actual " << gcd(105, 45) << " : Expected 15" << endl;
    cout << "Actual " << gcd(0, 8) << " : Expected 8" << endl;
}
