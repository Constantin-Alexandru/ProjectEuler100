#pragma once

#include "includes.h"

namespace problem4 {

	int reverse(int num)
	{
		int rev = 0;

		while (num != 0)
		{
			rev = rev * 10 + num % 10;

			num /= 10;
		}

		return rev;
	}

	void solve()
	{
		int start = 100;
		int end = 1000;

		int ans = 0;

		for (int i = start; i < end; i++)
		{
			for (int j = i + 1; j < end; j++)
			{
				int pal = i * j;

				int rev = reverse(pal);

				if (rev == pal && rev > ans)
				{
					ans = rev;
				}
			}
		}

		std::cout << "Problem 4 Answer: " << ans << '\n';

	}

}