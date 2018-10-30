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
