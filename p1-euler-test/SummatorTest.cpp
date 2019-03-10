#include "pch.h"

#include "../p1-euler/src/summator.h"



class SummatorTesting : public testing::Test {
public:
	Summator summator;
};



TEST_F(SummatorTesting, IsANumberDivisible)
{
	ASSERT_EQ(summator.is_divisable(3, 3), true);
	ASSERT_EQ(summator.is_divisable(10, 3), false);
	ASSERT_EQ(summator.is_divisable(3, 5), false);
	ASSERT_EQ(summator.is_divisable(21, 7), true);
	ASSERT_EQ(summator.is_divisable(33, 11), true);
}

TEST_F(SummatorTesting, CorrectSummationOfNumbers)
{
	ASSERT_EQ(summator.sum_if_divisible(1), 499500);
	ASSERT_EQ(summator.sum_if_divisible(2), 249500);
}

