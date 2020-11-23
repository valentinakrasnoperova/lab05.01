#include "gtest/gtest.h"
#include "func.h"

using namespace std;

TEST(gTest, ReturnValue) {
    ASSERT_DOUBLE_EQ(1.2710657587283734, g(2.5,1.1));
    ASSERT_TRUE( 1.2710657587283734==g(2.5,1.1));
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}