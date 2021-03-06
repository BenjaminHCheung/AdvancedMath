#include "complex.h"

#include <iostream>
#include <string>
#include <math.h>

Complex::Complex(double realInput, double imaginaryInput)
{
    mRealValue = realInput;
    mImaginaryValue = imaginaryInput;
}


double Complex::get_real_value()
{
    return mRealValue;
}
double Complex::get_imaginary_value()
{
    return mImaginaryValue;
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
    double squared{2.0};
    double modulus{sqrt(pow(mRealValue, squared)+pow(mImaginaryValue, squared))};
    return modulus;
}


Complex Complex::conjugate()
{
    double inverter{-1.0};
    double newImaginaryValue = mImaginaryValue * inverter;
    Complex conjugateOfComplexNumber(mRealValue, newImaginaryValue);
    return conjugateOfComplexNumber;
}


Complex Complex::operator+(Complex rightHandObject)
{
    double newRealValue{mRealValue + rightHandObject.get_real_value()};
    double newImaginaryValue{mImaginaryValue + rightHandObject.get_imaginary_value()};
    Complex newComplexNumber(newRealValue, newImaginaryValue);
    return newComplexNumber;
}
