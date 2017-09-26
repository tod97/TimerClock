#include "gtest/gtest.h"

#include "../Timer.h"

TEST(Timer, DefaultConstructor) {
    Timer t;
    ASSERT_FALSE(t.isStarted());
    ASSERT_NE(0, t.getSecs());
    ASSERT_NE(steady_clock::now(), t.getStartTime());
}

TEST(Timer, TestStartTimer) {
    Timer t;
    t.startTimer();
    ASSERT_TRUE(t.isStarted());
}
