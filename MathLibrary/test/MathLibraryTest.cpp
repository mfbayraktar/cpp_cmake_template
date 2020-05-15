#include <gtest/gtest.h>
#include "arithmetic.hpp"

TEST(MathLibraryTests, MacroTest) {
    EXPECT_EQ(multiply(10, 20), 200);
}