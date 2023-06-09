//write include statements
#include "data_types.h"
#include<iostream>

using std::cout; using std::cin;


//write namespace using statement for cout


int main()
{

	auto num = 0;
	cout<<"Enter number: ";
	cin>>num;

	auto result = multiply_numbers(num);
	cout<<"Result is: "<<result<<"\n";

	auto num1 = 4;
	auto result1 = multiply_numbers(num1);
	cout<<"Result is: "<<result1<<"\n";
	
	return 0;
}
