// ObjectsPassReturning.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "IntNumber.h"
#include <iostream>


int main()
{
	IntNumber intNumber1;
	IntNumber intNumber2;
	
	std::cin >> intNumber1 >> intNumber2;

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

