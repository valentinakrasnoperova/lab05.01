#include "gtest/gtest.h"
#include "func.h"

using namespace std;

TEST(gTest, ReturnValue) {
    ASSERT_DOUBLE_EQ(1.6726887784751829, g(2.5,1.3));
    ASSERT_TRUE( 1.6726887784751829==g(2.5,1.3));
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}