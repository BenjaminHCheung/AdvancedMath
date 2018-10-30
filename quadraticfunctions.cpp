#include "quadraticfunctions.h"

std::vector<Complex> solve_quadratic_equation(double a, double b, double c)
{
    std::vector<Complex> solutionVector;
    double imaginary{-1.0};
    double squared{2.0};
    double realPart{-b/(2*a)};
    double imaginaryPart{0.0};
    double plusMinusPart{0.0};
    double insideTheRoot{pow(b, squared) - (4.0 * a * c)};

    if(copysign(1.0, insideTheRoot) == imaginary)
    {
        imaginaryPart = sqrt(abs(insideTheRoot))/(2 * a);
    }
    else
    {
        plusMinusPart = sqrt(abs(insideTheRoot))/(2 * a);
    }

    Complex firstComplexNumber(realPart + plusMinusPart, imaginaryPart);
    solutionVector.push_back(firstComplexNumber);
    Complex secondComplexNumber(realPart - plusMinusPart, -imaginaryPart);
    solutionVector.push_back(secondComplexNumber);

    return solutionVector;
}

