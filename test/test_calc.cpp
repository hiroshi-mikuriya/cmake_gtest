#include <gtest/gtest.h>
#include "calc.h"

TEST(calc, plus){
    EXPECT_EQ(3, plus(1, 2));
    EXPECT_EQ(0, plus(-2, 2));
}

TEST(calc, minus){
    EXPECT_EQ(-1, minus(1, 2));
    EXPECT_EQ(-4, minus(-2, 2));
}
