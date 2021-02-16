// ObjectsPassReturning.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "IntNumber.h"
#include <iostream>


int main()
{
	int number1, number2;
	std::cout << "Enter two number\n";
	std::cin >> number1 >> number2;
	IntNumber intNumber1 = number1;
	IntNumber intNumber2 = number2;
	
	std::cout << "Suma ";
	(intNumber1 + intNumber2).Write();
	std::cout << "Minus ";
	(intNumber1 - intNumber2).Write();
	std::cout << "Product ";
	(intNumber1 * intNumber2).Write();
	std::cout << "Division ";
	(intNumber1 / intNumber2).Write();
	return 0;
}

