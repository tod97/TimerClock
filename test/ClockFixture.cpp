#include "gtest/gtest.h"

#include "../Clock.h"


class ClockSuite : public ::testing::Test {

protected:
    virtual void SetUp() {
        //c = Clock();
    }

    Clock c;
};


TEST_F(ClockSuite, TestStart) {
    c.startClock();

    ASSERT_EQ(100,c.getHeight());
    ASSERT_EQ(100,c.getWidth());
}
