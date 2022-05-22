//Lab Exercise 5.23.2022 Problem 1
//Author: 

#include <iostream>
using namespace std;

//Add prototype here

int main()
{
	int number, total;
	cout << "Enter an integer: ";
	cin >> number;
	total = sumOfDigits(number);
	cout << "The sum of digits = " << total << endl;
	return 0;
}

//Add function here
