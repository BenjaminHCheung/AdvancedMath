#include "gtest/gtest.h"
#include "complex.h"

TEST(GivenADefinedObjectOfClassComplexOfAllPositiveNumbers, WhenUsingTheBuildOutputStringFunction_ItReturnsTheCorrectStringThatWillBePrinted)
{
    Complex testComplexObject(5.232, 12.370);
    std::string functionString{testComplexObject.build_output_string()};
    std::string expectedString{"5.232000 + i12.370000"};
    EXPECT_TRUE(functionString == expectedString);
}
