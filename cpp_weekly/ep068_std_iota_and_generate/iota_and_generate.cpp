/**************
 *
 *	This example demonstrates the use of std::iota and std::generate.
 *
 *	std::iota
 *	Fills the range [first, last) with sequentially increasing values, starting with value and repetitively evaluating ++value.
 *	https://en.cppreference.com/w/cpp/algorithm/iota
 *
 *	std::generate
 *	Assigns each element in range [first, last) a value generated by the given function object g.
 *	https://en.cppreference.com/w/cpp/algorithm/generate
 *
 *
 * **************/

#include <iostream>
#include <numeric>
#include <algorithm>
#include <array>

int main() {
	std::array<int, 10> ar;
	std::iota(ar.begin(), ar.end(), 1);
	for(const auto l_val : ar) {
		std::cout << l_val << ' ';
	}
	std::cout << '\n';

	std::array<int, 10> ar2;
	std::generate(ar2.begin(), ar2.end(), 
			[i = 10] () mutable { return ++i; } );
	for(const auto l_val : ar2) {
		std::cout << l_val << ' ';
	}
	std::cout << '\n';

	return 0;
}

/***********
 *	END OF FILE
 * **********/

