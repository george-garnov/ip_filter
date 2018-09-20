#include <gtest/gtest.h>

TEST(myTest, Test1) { 
    ASSERT_EQ(100, 6*6+8*8);
}

TEST(myTest, Test2) {
    ASSERT_FALSE(true==false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
