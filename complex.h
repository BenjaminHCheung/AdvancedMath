#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex
{
public:
    Complex(double realInput, double imaginaryInput);

    void print();
    std::string build_output_string();
    double modulus();
    Complex conjugate();

private:
    double mRealValue;
    double mImaginaryValue;
};

#endif // COMPLEX_H
