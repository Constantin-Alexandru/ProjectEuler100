#pragma once

#include "includes.h"

namespace problem5 {

	int biggest_divisor(int a, int b)
	{
		while (b)
		{
			int c = a % b;
			a = b;
			b = c;
		}

		return a;
	}

	int smallest_multiple(int a, int b)
	{
		return ((a * b) / biggest_divisor(a, b));
	}

	void solve()
	{
		int last = 20;

		int ans = 2;

		for (int i = 3; i <= last; i++)
		{
			ans = smallest_multiple(ans, i);
		}


		std::cout << "Problem 5 Answer: " << ans << '\n';

	}
}