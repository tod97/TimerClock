#include "gtest/gtest.h"

#include "../Crono.h"

TEST(Crono, DefaultConstructor) {
    Crono c;
    ASSERT_FALSE(c.isStarted());
    ASSERT_EQ(0, c.getInterTime());
    ASSERT_NE(steady_clock::now(), c.getStartTime());
}

TEST(Crono, TestStartCrono) {
    Crono c;
    c.startChrono();
    ASSERT_TRUE(c.isStarted());
}
