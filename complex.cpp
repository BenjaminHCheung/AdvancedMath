#include "complex.h"

#include <iostream>
#include <string>
#include <math.h>

Complex::Complex(double realInput, double imaginaryInput)
{
    mRealValue = realInput;
    mImaginaryValue = imaginaryInput;
}

void Complex::print()
{
    std::string outputString{build_output_string()};
    std::cout << outputString << std::endl;
}

std::string Complex::build_output_string()
{
    std::string outputString{""};
    outputString += std::to_string(mRealValue);
    if(std::copysign(1.0, mImaginaryValue) == -1.0)
    {
        outputString += " - i";
    }
    else
    {
        outputString += " + i";
    }
    outputString += std::to_string(abs(mImaginaryValue));
    return outputString;
}

double Complex::modulus()
{
    double modulus{sqrt(pow(mRealValue, 2.0)+pow(mImaginaryValue, 2.0))};
    return modulus;
}

