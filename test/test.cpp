//
// Created by Nebi Kirmali on 1-10-2018.
//


#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Calculator.h"

using testing::Eq;

namespace {
    calculator calculator;

    TEST(TestInt, Add1) {
        EXPECT_EQ(10, calculator.add(2,8));
    }
    TEST(testInt, divide1){
        EXPECT_EQ(2,calculator.divide(10,5));
    }

}
