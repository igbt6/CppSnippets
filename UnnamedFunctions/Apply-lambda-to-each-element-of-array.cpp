//multiplies x2 input integer data
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
	std::vector<int> data{};
	std::copy(std::istream_iterator<int>(std::cin),
		std::istream_iterator<int>(),
		std::back_inserter(data));
	std::transform(data.begin(), data.end(), data.begin(), [](int x) { return x * 2; });
	std::copy(data.begin(), data.end(),
		std::ostream_iterator<int>(std::cout, "\n"));
    return 0;
}