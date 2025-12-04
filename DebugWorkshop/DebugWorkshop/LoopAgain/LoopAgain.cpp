#include <iostream>

int main()
{
	unsigned int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;

	while (size > 0) //the loop was infinite because it is an unsigned int which means when doing -1 when size = 0 than it becomes the largest number that an unsigned int can have and doing it over and over infinitly
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		size--;
	}

	return 0;
}