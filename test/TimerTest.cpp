#include "gtest/gtest.h"

#include "../Crono.h"

TEST(Crono, DefaultConstructor) {
    Crono c;
    ASSERT_FALSE(c.isStarted());
    ASSERT_EQ(0, c.getInterTime());
    ASSERT_EQ(steady_clock::now(), c.getStartTime());
}

TEST(Crono, TestStart) {
    Crono c;
    c.startChrono();
    ASSERT_FALSE(c.isStarted());
}
