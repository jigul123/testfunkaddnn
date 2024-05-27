#include "pch.h"
#include "C:\Users\usr\source\repos\wer\Header1.cpp"
#include <vector>

TEST(TestCaseName, TestBool) {
	vector<int> res;
	res = addnn({ 1, 2, 3, 4 }, 3);
	ASSERT_TRUE(res[0] == 4);
	ASSERT_TRUE(res[1] == 5);
	ASSERT_TRUE(res[2] == 6);
	ASSERT_TRUE(res[3] == 7);
}

TEST(TestCaseName, TestTrue) {
	ASSERT_TRUE(true);
}