#include <iostream>
#include "summator.h"


int main(int argc, char** argv)
{
	
	long long p1_sum = 0;

	Summator summator;

	// Sum for number 3 and 5 and minus the sum of all numbers 3x5=15
	p1_sum = summator.sum_if_divisible(5) + summator.sum_if_divisible(3) - summator.sum_if_divisible(15);

	
	std::cout << "Solution first problem of ProjectEuler.net: " << p1_sum << std::endl;
	
	return 0;
}
