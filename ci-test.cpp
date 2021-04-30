#include <iostream>

#include <function.h>
#include <gtest/gtest.h>

using namespace std;

TEST(wong, add) {
	EXPECT_EQ(gt::add(3, 6), 9);
}

TEST(wong, sub) {
	EXPECT_EQ(gt::sub(2, 1), 1);
}
//int main(){
//	
//	std::cout << "successfully deploy workflow!" << std::endl;
//	
//	return 0;
//}
