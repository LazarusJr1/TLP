#include <iostream>
void main()
{
	int r, g;
	srand(time(0));
	r = rand() % 9 + 1;
	do
	{
	std::cout << "Input a number from 1 to 10! \n";
	std::cin >> g;
	if (g > r)
	{
		std::cout << "Too high! \n";
	}
	else if (g < r)
	{
		std::cout << "Too low! \n";
	}
	if (g == r)
	{
		std::cout << "Correct! \n";
	}
	} while (g != r);
}