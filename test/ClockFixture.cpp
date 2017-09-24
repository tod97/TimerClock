#include "gtest/gtest.h"

#include "../Crono.h"


class CronoSuite : public ::testing::Test {

protected:
    virtual void SetUp() {
        c = Crono(steady_clock::now(),0,true);
    }

    Crono c;
};


TEST_F(CronoSuite, TestStart) {
    c.startChrono();

    ASSERT_EQ(0,c.getChronoDouble());
}
