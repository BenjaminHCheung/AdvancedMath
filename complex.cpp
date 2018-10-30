#include "complex.h"

#include <iostream>
#include <string>

Complex::Complex(double realInput, double imaginaryInput)
{
    mRealValue = realInput;
    mImaginaryValue = imaginaryInput;
}

void Complex::print()
{

}

std::string Complex::build_output_string()
{
    std::string outputString{""};
    outputString += std::to_string(mRealValue);
    outputString += " + i";
    outputString += std::to_string(mImaginaryValue);
    std::cout << outputString << std::endl;
    return outputString;
}
