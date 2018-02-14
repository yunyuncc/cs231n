#include <gmock/gmock.h>
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace testing;
class data_set : public testing::Test {
public:
  void SetUp() { cout << "set up" << endl; }
  void TearDown() { cout << "tear down" << endl; }
};
// how to set up and tear down
TEST(read_data_set, to_cv_mat) { cv::Mat mat; }

TEST_F(data_set, test_set_up_01) { cout << "test_set_up_01" << endl; }
TEST_F(data_set, test_set_up_02) { cout << "test_set_up_02" << endl; }
