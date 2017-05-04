#ifndef TST_CAMERA_H
#define TST_CAMERA_H

#include "mocks.h"
using namespace testing;

TEST(MockCamera, SerialConnectionToCameraReturnsZeroOnSuccess)
{
    MockCamera camera;
    EXPECT_CALL(camera, connectCamera())
            .Times(1)
            .WillOnce(Return(0));
    ASSERT_EQ(0,camera.connectCamera());
}
TEST(MockCamera, SerialConnectionToCameraReturnsNegOneOnFailure)
{
    MockCamera camera;
    EXPECT_CALL(camera, connectCamera())
            .Times(1)
            .WillOnce(Return(-1));
    ASSERT_EQ(-1,camera.connectCamera());
}

#endif // TST_CAMERA_H
