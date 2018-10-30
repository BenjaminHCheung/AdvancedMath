#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex
{
public:
    Complex(double realInput, double imaginaryInput);

    double get_real_value();
    double get_imaginary_value();

    void print();
    std::string build_output_string();
    double modulus();
    Complex conjugate();
    Complex operator+(Complex rightHandObject);

private:
    double mRealValue;
    double mImaginaryValue;
};

#endif // COMPLEX_H
