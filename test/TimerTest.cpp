#include "gtest/gtest.h"

#include "../Timer.h"

TEST(Timer, DefaultConstructor) {
    Timer t;
    ASSERT_FALSE(t.isStarted());
    ASSERT_EQ(0, t.getSecs());
    ASSERT_EQ(steady_clock::now(), t.getStartTime());
}

TEST(Timer, TestStartTimer) {
    Timer t;
    t.startTimer();
    ASSERT_FALSE(t.isStarted());
}
