#ifndef TST_POWER_H
#define TST_POWER_H

#include "mocks.h"
#include "power.h"
TEST(MockPower, SerialPortConnectionReturnsZeroOnSuccess)
{
    MockPower power;
    EXPECT_CALL(power, connectPower())
            .Times(AtLeast(1))
            .WillOnce( Return(0) );
    EXPECT_EQ(0, power.connectPower());
}
TEST(MockPower, SerialPortConnectionReturnsNegOneOnFailure)
{
    MockPower power;
    EXPECT_CALL(power, connectPower())
            .Times(AtLeast(1))
            .WillOnce( Return(-1) );
    EXPECT_EQ(-1, power.connectPower());
}
TEST(MockPower, WriteVoltageToSerialPortReturnsZeroForValidInput)
{
    MockPower power;
    EXPECT_CALL(power, writeVoltage(1.0))
            .Times(1)
            .WillOnce(Return(0));
    EXPECT_EQ(0, power.writeVoltage(1.0));
}
TEST(MockPower, WriteVoltageToSerialPortReturnsNegOneForInvalidInput)
{
    MockPower power;
    EXPECT_CALL(power, writeVoltage(6.0))
            .Times(1)
            .WillOnce(Return(-1));
    EXPECT_EQ(-1, power.writeVoltage(6.0));
}
TEST(MockPower, ReadVoltageToSerialPortReturnsZeroOnSuccess)
{
    MockPower power;
    EXPECT_CALL(power, readVoltage())
            .Times(1)
            .WillOnce(Return(0));
    EXPECT_EQ(0, power.readVoltage());
}
TEST(MockPower, GetDeviceIdFromPortReturnsValueWhenLabJackConnected)
{
    Power power;
    EXPECT_EQ(LABJACK_U6_DEVICE, power.getDeviceId());
}
TEST(PowerTest, GetDeviceIdFromPortReturnsErrorValueWhenLabJackNotConnected)
{
    Power power;
    EXPECT_EQ(ERROR_NO_DEVICE_FOUND, power.getDeviceId());
}

#endif // TST_POWER_H
