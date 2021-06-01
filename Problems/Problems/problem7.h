#pragma once

#include "includes.h"

namespace problem7 {

	void solve()
	{

		int ind = 10001;

		int ans = 0;

		std::vector<int> primes;
		std::vector<int> nums;

		nums.resize(150000, 0);

		primes.push_back(2);
		
		for (int i = 3; primes.size() < ind; i += 2)
		{
			if (nums[i] == 0)
			{
				primes.push_back(i);

				for (int j = i * 3; j < nums.size(); j += (i * 2))
				{
					nums[j] = 1;
				}
			}
		}


		std::cout << "Problem 7 Answer: " << primes[ind - 1] << '\n';
	}
}