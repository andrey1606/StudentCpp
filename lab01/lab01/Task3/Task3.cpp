#include "pch.h"
#include <iostream>
#include <cmath>

int main()
{
	int choice1, choice2;
	double a, b, c, osn, ln1, ln2, result1, result;
	do
	{
		std::cout << "Hello, my dear. What do you want to do? \n";
		std::cout << "1) Addition\n";
		std::cout << "2) Subtraction\n";
		std::cout << "3) Multiplication\n";
		std::cout << "4) Division\n";
		std::cout << "5) Logarithm\n";
		std::cout << "6) Square root\n";
		std::cout << "7) Exponentiation 2\n";
		std::cin >> choice1;
		std::cout << "Your answer: " << choice1 << std::endl;
		switch (choice1)
		{
		case 1:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			result = a + b;
			std::cout << "Result: " << result << std::endl;
			break;
		case 2:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			result = a - b;
			std::cout << "Result: " << result << std::endl;
			break;
		case 3:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			result = a * b;
			std::cout << "Result: " << result << std::endl;
			break;
		case 4:
			std::cout << "Enter number 1: ";
			std::cin >> a;
			std::cout << "Enter number 2: ";
			std::cin >> b;
			result = a / b;
			std::cout << "Result: " << result << std::endl;
			break;
		case 5:
			std::cout << "Enter the number: ";
			std::cin >> c;
			std::cout << "Enter the base of your logarithm: ";
			std::cin >> osn;
			ln1 = log(c);
			ln2 = log(osn);
			result1 = ln1 / ln2;
			std::cout << "Result: " << result1 << std::endl;
			break;
		case 6:
			std::cout << "Enter the number: ";
			std::cin >> c;
			result1 = sqrt(c);
			std::cout << "Result: " << result1 << std::endl;
			break;
		case 7:
			std::cout << "Enter the number: ";
			std::cin >> c;
			result1 = pow(c, 2);
			std::cout << "Result: " << result1 << std::endl;
			break;

		}
		std::cout << "Do you want to try again? \n";
		std::cout << "1) Yes\n";
		std::cout << "2) No\n";
		std::cin >> choice2;
	} while (choice2 == 1);

	return 0;
}
