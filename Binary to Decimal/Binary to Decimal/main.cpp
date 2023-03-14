#include <iostream>
#include <string>
using namespace std;

// Write a function named binToDec() that accepts an integer parameter whose digits are meant to
// represent binary (base-2) digits, and converts that integer's representation to decimal (base-
// 10). The function should return the integer value before it was converted. For example, given
// this code:

//      int a = 101011;
//      int b = binToDec(a);
//      cout << "a->" << a << ", b->" << b << endl;
//      The output is: a->43, b->101011

// Prototype
// int binToDec(int& a);

int binToDec(int& a)
{
    // create a variable to store a and return value to b
    int result = a;
    
    // convert a to binary while updating value of a by reference
    int base = 1; // base value of 2 starting at 2^0 = 1
    int temp = 0; // working value
    int rem = 0; // remainder
    
    while (a != 0)
    {
        rem = a % 10;
        temp += rem * base;
        a /= 10;
        base *= 2;
    }
    // return the result through the parameter a
    a = temp;
    
    return result;
}

int binToDec(int& a);

int main()
{
    int a = 101011;
    int b = binToDec(a);
    cout << "Actual:" << endl;
    cout << "a -> " << a << ", b -> " << b << endl;
    cout << "Expected:" << endl;
    cout << "a -> 43, b -> 101011" << endl;
}
