#include "quadraticfunctions.h"

std::vector<Complex> solve_quadratic_equation(double a, double b, double c)
{
    std::vector<Complex> solutionVector;
    double squared{2.0};
    double realPart{-b/(2*a)};
    double quadraticPartPositve{sqrt(pow(b, squared) - (4.0 * a * c))/(2*a)};
    double quadraticPartNegative{-sqrt(pow(b, squared) - (4.0 * a * c))/(2*a)};
    Complex firstComplexNumber(realPart + quadraticPartPositve, 0.0);
    solutionVector.push_back(firstComplexNumber);
    Complex secondComplexNumber(realPart + quadraticPartNegative, 0.0);
    solutionVector.push_back(secondComplexNumber);
    return solutionVector;
}

