#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

//Odd int numbers inside a input vector
//need to insert median
TEST(AmazingMedianTest1, AmazingMedianTest1) {
  Solution solution;

  vector<int> input0 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  vector<int> result = {43, 43, 21, 10, 7, 0, 69, 900, 637, 500, 231, 123, 99};
 
  EXPECT_EQ(solution.AmazingMedian(input0), result);
}

//Even  int number inside the input vec
//remove the median
TEST(AmazingMedianTest2, AmazingMedianTest2) {
  Solution solution;

  vector<int> input1 = {3,1,4,1, 9,10};
  vector<int> result1 = {3,1,1,10,9,4};
 
  EXPECT_EQ(solution.AmazingMedian(input1), result1);
}
