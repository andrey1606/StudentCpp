#include "pch.h"
#include <iostream>

int main()
{
	int a, b, choice1, result, choice2;
	do
	{
		std::cout << "Hello, my dear. What are the numbers? \n";
		std::cout << "Number 1: ";
		std::cin >> a;
		std::cout << "Number 2: ";
		std::cin >> b;
		std::cout << "What do you want to do? \n";
		std::cout << "1) +\n";
		std::cout << "2) -\n";
		std::cout << "3) *\n";
		std::cout << "4) /\n";
		std::cin >> choice1;
		std::cout << "Your answer: " << choice1 << std::endl;
		switch (choice1)
		{
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			result = a / b;
			break;
		}
		std::cout << "Result: " << result << std::endl;
		std::cout << "Do you want to try again? \n";
		std::cout << "1) Yes\n";
		std::cout << "2) No\n";
		std::cin >> choice2;
	} while (choice2 == 1);

	return 0;
}