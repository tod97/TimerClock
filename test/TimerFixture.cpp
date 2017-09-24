#include "gtest/gtest.h"

#include "../Timer.h"


class TimerSuite : public ::testing::Test {

protected:
    virtual void SetUp() {
        t = Timer();
    }

    Timer t;
};


TEST_F(TimerSuite, TestStartTimer) {
    t.startTimer();

    ASSERT_EQ(0,t.getTimerDouble());
}
