#include "tst_pump.h"
#include"tst_camera.h"
#include "tst_power.h"
#include"tst_foo.h"


#include <gtest/gtest.h>

//struct Power
//{
//    double voltage;
//    Power() {}

//    explicit Power(const double voltage)
//        :voltage{ voltage }
//    {
//    }
//    void incrementVoltage(double v)
//    {
//        voltage += v;
//    }
//};

//struct PowerTest : testing::Test
//{
//    Power* power;
//    PowerTest() { power = new Power; }
//    ~PowerTest() { delete power; }
//};

//TEST_F(PowerTest, PowerStartsOff)
//{
//    EXPECT_EQ(0, power->voltage);
//}

//TEST_F(PowerTest, CanIncreaseVoltage)
//{
//    power->incrementVoltage(2.0);
//    EXPECT_EQ(2.0, power->voltage);
//}


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
