#pragma once

#include "includes.h"

namespace problem1 {

	void solve()
	{
		int upper_limit = 1000;

		int ans = 8;

		for (int i = 6; i < upper_limit; i += 3)
		{
			ans += i;
		}

		for (int i = 10; i < upper_limit; i += 5)
		{
			ans += i;
		}

		for (int i = 15; i < upper_limit; i += 15)
		{
			ans -= i;
		}


		std::cout << "Problem 1 Answer: " << ans << '\n';
	}

}