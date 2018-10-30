#include "gtest/gtest.h"
#include "quadraticfunctions.h"

TEST(GivenASetOfValuesIntoTheQuadraticFormulaThatWillProduceANonComplexNumber, WhenUsingTheQuadraticFormula_ReturnAVectorOfPredictedValuesInTheFormOfComplexObjects)
{
    std::vector<Complex> testSolutions{solve_quadratic_equation(1.0, -3.0, 2.0)};
    std::string expectedFirstComplexNumber{"2.500000 + i0.000000"};
    std::string expectedSecondComplexNumber{"1.500000 + i0.000000"};
    EXPECT_TRUE(expectedFirstComplexNumber == testSolutions[1].build_output_string());
    EXPECT_TRUE(expectedSecondComplexNumber == testSolutions[2].build_output_string());
}
