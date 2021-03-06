#pragma once
#include<iostream>
class IntNumber
{
	int number;
public:
	IntNumber();
	IntNumber(int number);
	IntNumber(const IntNumber& intNumber);

	IntNumber GetGreater(IntNumber* intNumber) const;
	IntNumber GetLess(IntNumber* intNumber) const;

	IntNumber operator+(const IntNumber& intNumber);
	IntNumber operator-(const IntNumber& intNumber);
	IntNumber operator*(const IntNumber& intNumber);
	IntNumber operator/(const IntNumber& intNumber);

	friend std::ostream& operator<<(std::ostream& os, const IntNumber& intNumber);
	friend std::istream& operator>>(std::istream& os, IntNumber& intNumber);

	void Write()
	{
		std::cout << "Number " << number << "\n";
	}
	~IntNumber();
};

