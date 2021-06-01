#pragma once

#include "includes.h"

namespace problem3 {

	void solve()
	{
		long long number = 600851475143;
		long long ans = 0;

		while (number % 2 == 0)
		{
			ans = 2;

			number /= 2;
		}
				
		long long div = 3;
		
		while (number != 1)
		{
			while (number % div == 0)
			{
				ans = div; 

				number /= div;
			}

			div += 2;
		}

		std::cout << "Problem 3 Answer: " << ans << '\n';
		
	}
}