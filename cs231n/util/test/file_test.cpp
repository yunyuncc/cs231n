#include "../file.hpp"
#include "gmock/gmock.h"
using namespace testing;
using namespace yun::util;
int main(int argc, char **argv) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
TEST(test_file_util, path_join) {
  auto path1 = path_join({"/home/", "yunyuncc", "github"});
  auto path2 = path_join({"/home", "yunyuncc", "github"});
  ASSERT_THAT(path1, Eq(path2));
  ASSERT_THAT(path1, Eq("/home/yunyuncc/github"));
  auto path3 = path_join({"home", "yunyuncc"});
  ASSERT_THAT(path3, Eq("home/yunyuncc"));
  auto path4 = path_join({"/home/", "", "github/"});
  ASSERT_THAT(path4, Eq("/home/github/"));
}
