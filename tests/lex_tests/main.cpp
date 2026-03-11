#include "TestClass.hpp"

#include "gtest/gtest.h"

auto main(int argc, char **const argv) -> int {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}