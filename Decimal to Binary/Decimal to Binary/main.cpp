#include <iostream>
#include <string>
using namespace std;

// Write a function named decToBin() that accepts an integer parameter whose digits are meant to
// represent decimal (base-10) digits, and converts that integer to a representation of binary
// (base-2). The function should return the integer value before it was converted. For example,
// given this code:

//      int a = 43;
//      int b = decToBin(a);
//      cout << "a->" << a << ", b->" << b << endl;
//      The output is: a->101011, b->43

// Prototype
// int decToBin(int& a);

int decToBin(int& a)
{
    // create a variable to store a and return value
    int result = a;
    
    // convert a to binary while updating value of a by reference
    int base = 1; // base value of 10 starting at 10^0 = 1
    int temp = 0; // working value
    int rem = 0; // remainder
    
    while (a != 0)
    {
        rem = a % 2;
        temp += rem * base;
        a /= 2;
        base *= 10;
    }
    // return the result through the parameter a
    a = temp;
    
    return result;
}

int decToBin(int& a);

int main()
{
    int a = 43;
    int b = decToBin(a);
    cout << "Actual:" << endl;
    cout << "a -> " << a << ", b -> " << b << endl;
    cout << "Expected:" << endl;
    cout << "a -> 101011, b -> 43" << endl;
}
