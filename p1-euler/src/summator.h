#pragma once


class Summator
{
public:
	
	long long sum_if_divisible(long long divisor) const
	{
		long long sum = 0;

		for (long long i = 0; i < 1000; i++)
		{
			if (is_divisable(i,divisor) == true)
			{
				sum += i;
			}
		}
		
		return sum;
	}

	long long is_divisable(long long number, long long divisor) const
	{
		if ((number%divisor) == 0) return true;
		return false;
	}


	


};

