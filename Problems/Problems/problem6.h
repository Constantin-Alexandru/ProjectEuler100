#pragma once

#include "includes.h"

namespace problem6 {

	void solve()
	{
		int last = 100;

		unsigned long long sum_sq = 0;
		unsigned long long sq_sum = 0;

		unsigned long long ans = 0;

		for (int i = 1; i <= 100; i++)
		{
			sum_sq += (i * i);

			sq_sum += i;
		}

		sq_sum = sq_sum * sq_sum;

		ans = sq_sum - sum_sq;

		std::cout << "Problem 6 Answer: " << ans << '\n';
	}
}