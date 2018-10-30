#include "gtest/gtest.h"
#include "complex.h"

TEST(GivenADefinedObjectOfClassComplexOfAllPositiveNumbers, WhenUsingTheBuildOutputStringFunction_ItReturnsTheCorrectStringThatWillBePrinted)
{
    Complex testComplexObject(5.232, 12.370);
    std::string functionString{testComplexObject.build_output_string()};
    std::string expectedString{"5.232000 + i12.370000"};
    EXPECT_TRUE(functionString == expectedString);
}

TEST(GivenADefinedObjectOfClassComplexWithAllNegativeValues, WhenUsingTheBuildOutputStringFunction_ItReturnsTheCorrectStringThatWillBePrinted)
{
    Complex testComplexObject(-22.573, -453.2835);
    std::string functionString{testComplexObject.build_output_string()};
    std::string expectedString{"-22.573000 - i453.283500"};
    EXPECT_TRUE(functionString == expectedString);
}

TEST(GivenADefinedObjectOfClassComplexWithArbitraryValuesForTheRealAndImaginaryParts, WhenCalculatingTheModulusUsingTheModulusFunction_ItReturnsTheCorrectValueForTheModulusInTheFormOfADouble)
{
    Complex testComplexObject(34.6765, -14.9987);
    double expectedModulus{37.78122091648177};
    double calculatedModulus{testComplexObject.modulus()};
    EXPECT_DOUBLE_EQ(expectedModulus, calculatedModulus);
}

TEST(GivenADefinedObjectOfClassComplexWithArbitraryValuesForTheRealAndImaginaryParts, WhenCalculatingTheConjugateUsingTheConjugateFunction_ItReturnsTheCorrectValuesForTheConjugateInTheFormOfAComplexNumber)
{
    Complex testComplexObject(253.89364, -29.532870);
    std::string expectedConjugate{"253.893640 + i29.532870"};
    Complex conjugateOfTestComplex{testComplexObject.conjugate()};
    std::string calculatedConjugate{conjugateOfTestComplex.build_output_string()};
    EXPECT_TRUE(expectedConjugate == calculatedConjugate);
}

TEST(GivenTwoArbitraryComplexNumbers, WhenUsingTheAdditionOperator_TheOperationReturnsTheCorrectComplexNumber)
{
    Complex testComplexObjectOne(98.257, -63.98326);
    Complex testComplexObjectTwo(-896.6324, -96.871234);
    Complex newComplexObject{testComplexObjectOne + testComplexObjectTwo};
    std::string calculatedComplexObject{newComplexObject.build_output_string()};
    std::string expectedComplexObject{"-798.375400 - i160.854494"};
    EXPECT_TRUE(expectedComplexObject == calculatedComplexObject);
}

