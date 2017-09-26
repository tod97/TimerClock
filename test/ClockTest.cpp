#include "gtest/gtest.h"

#include "../Clock.h"

TEST(Clock, DefaultConstructor) {
    Clock c;
    ASSERT_EQ(0,c.getWidth());
    ASSERT_EQ(0, c.getHeight());
    ASSERT_TRUE(c.isUpdate());

}

TEST(Clock, TestStart) {
    /*Clock c;
    c.startClock();
    c.setUpdate(false);
    ASSERT_FALSE(c.isUpdate());*/
}
