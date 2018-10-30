#include "gtest/gtest.h"
#include "quadraticfunctions.h"

TEST(GivenASetOfValuesIntoTheQuadraticFormulaThatWillProduceNonComplexNumbers, WhenUsingTheQuadraticFormula_ReturnAVectorOfPredictedValuesInTheFormOfComplexObjects)
{
    std::vector<Complex> testSolutions{solve_quadratic_equation(1.0, -3.0, 2.0)};
    std::string expectedFirstComplexNumber{"2.000000 + i0.000000"};
    std::string expectedSecondComplexNumber{"1.000000 - i0.000000"};
    EXPECT_TRUE(expectedFirstComplexNumber == testSolutions[0].build_output_string());
    EXPECT_TRUE(expectedSecondComplexNumber == testSolutions[1].build_output_string());
}

TEST(GivenASetOfValuesIntoTheQuadraticFormulaThatWillProduceComplexNumbers, WhenUsintTheQuadraticFormula_ItReturnsAVectorOfTheCorrectComplexNumbers)
{
    std::vector<Complex> testSolutions{solve_quadratic_equation(2.0, 4.0, 4.0)};
    std::string expectedFirstComplexNumber{"-1.000000 + i1.000000"};
    std::string expectedSecondComplexNumber{"-1.000000 - i1.000000"};
    EXPECT_TRUE(expectedFirstComplexNumber == testSolutions[0].build_output_string());
    EXPECT_TRUE(expectedSecondComplexNumber == testSolutions[1].build_output_string());
}
