#include <gtest/gtest.h>
#include "example.h"

TEST(ExampleTest, AreaTriangle) {
    EXPECT_EQ(6, area_triangle(3, 4));
}

TEST(ExampleTest, AreaRectangle) {
    EXPECT_EQ(12, area_rectangle(3, 4));
}
