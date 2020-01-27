#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(StudentNameTest, ReturnStudentName) {
  Solution solution;
  std::string actual = solution.StudentName();
  std::string expected = "Chuang Zhang";
  EXPECT_EQ(expected, actual);
}
TEST(StudentAgeTest, ReturnStudentAge) {
  Solution solution;
  std::string actual = solution.StudentAge();
  std::string expected = "23";
  EXPECT_EQ(expected, actual);
}
TEST(StudentMajorTest, ReturnStudentMajor) {
  Solution solution;
  std::string actual = solution.StudentMajor();
  std::string expected = "Electrical Engineering";
  EXPECT_EQ(expected, actual);
}


