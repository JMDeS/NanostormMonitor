#ifndef TST_POWER_H
#define TST_POWER_H

#include "mocks.h"
#include "power.h"
#define ERROR -1
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
TEST(MockPower, GetDeviceIdFromPortReturnsErrorValueWhenLabJackNotConnected)
{
    Power power;
    power.connect();
    EXPECT_EQ(ERROR_NO_DEVICE_FOUND, power.getDeviceId());
}
TEST(PowerTest, UpdateVoltageReturnsZeroIfInBounds){
    Power power;
    EXPECT_EQ(0, power.updateVoltage(2.0));
}
TEST(PowerTest, UpdateVoltageReturnsErrorForInputLessThanZero){
    Power power;
    EXPECT_EQ(ERROR, power.updateVoltage(-2.0));
}
TEST(PowerTest, UpdateVoltageReturnsErrorForInputGreaterThan5point7){
    Power power;
    EXPECT_GT(5.7, power.updateVoltage(6.0));
}




#endif // TST_POWER_H
