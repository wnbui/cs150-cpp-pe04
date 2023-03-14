#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Write a function named quadratic() that computes roots of quadratic equations. Recall that a
// quadratic equation is one of the form, ax2 + bx + c = 0.

// Your function accepts five parameters:
//  The integer coefficients a, b, and c as two input parameters
//  Two real number (double) output parameters root1 and root2.

// Your function should compute the two integer roots of the quadratic equation and store them
// into the two reference parameters. For example, the equation x2 - 3x - 4 = 0 has roots of x = 4
// and x = -1, so the call quadratic(1, -3, -4, root1, root2); should set root1 to 4 and root2
// to -1. You may assume that the function has two real roots.

// Prototype
// double quadratic(int a, int b, int c, double root1, double root2);

void quadratic(int a, int b, int c, double& root1, double& root2)
{
    root1 = ((-1 * b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    
    root2 = ((-1 * b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}

int main()
{
    double root1;
    double root2;
    quadratic(1, -3, -4, root1, root2);
    cout << "Root 1 = " << root1 << ", Root 2 = " << root2 << endl;
}
