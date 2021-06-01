#pragma once

#include "includes.h"

namespace problem2 {

	void solve()
	{
		int upper_limit = 4000000;

		long long ans = 0;

		int x = 1, y = 1;

		while (y < upper_limit)
		{
			y = x + y;
			x = y - x;

			ans = y % 2 == 0 ? ans + y : ans;
		}


		std::cout << "Problem 2 Answer: " << ans << '\n';
	}

}