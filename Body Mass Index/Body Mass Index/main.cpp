#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Write a function named bmiCalc() that accepts two input parameters of type double,
//representing a person's height and weight (in that order). The function returns (through the
//return statement) the user's BMI. It also returns, through an integer output parameter, the BMI
//category as calculated below.

//          BMI Category    Class
//          below 18.5        1
//          18.5 - 24.9       2
//          25.0 - 29.9       3
//          30.0 and up       4

//          BMI = weight / (height in meter)^2

// prototype
// double bmiCalc(double height, double weight, int& bmiClass);

double bmiCalc(double height, double weight, int& bmiClass)
{
    bmiClass = 0;
    // store & calculate BMI
    double result = weight / (height * height) * 703.0;
    
    if (result < 18.5)
    {
        bmiClass = 1;
    }
    else if (result >= 18.5 && result < 25.0)
    {
        bmiClass = 2;
    }
    else if (result >= 25.0 && result < 30.0)
    {
        bmiClass = 3;
    }
    else if (result >= 30.0)
    {
        bmiClass = 4;
    }
    return result;
}

int main()
{
    int bmiClass = 0;
    double bmi = bmiCalc(70.0, 194.25, bmiClass);
    cout << "BMI = " << bmi << ", class " << bmiClass << endl;
    cout << "BMI = 27.8689, class 3" << endl;
}
