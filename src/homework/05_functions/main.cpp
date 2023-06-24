#include<iostream>
#include<vector>


using std::cout; using std::cin;
using std::vector;

#include "func.h"

int main() 
{

	int choice;

	do {
		cout<<"\nMenu:""\n";
		cout<<"\n1 - Get max value\n";
		cout<<"2 - Get square of elements\n";
		cout<<"3 - Exit\n";
		cout<<"\nEnter you choice: ";
		cin>>choice;

	switch(choice)
	{
		case 1: 
		{
			vector<int> nums = {5, 7, 99, -100, 10 };
			int largest_number = get_vector_max_value(nums);
			cout<<"\nThe largest number in the vector is: "<<largest_number<<"\n";
		}
			break;
		case 2: 
		{
			vector<int> numbers = { 6, 1, 8, 9, 4 };
			vector<int> squared_nums = get_square_of_each_element(numbers);

			cout<<"\nSquared numbers are: ";
			for(int square: squared_nums)
			{
			cout<<square<<" ""\n";
			}
		}
			break;
		case 3:
			cout<<"\nExiting...""\n";
			break;
		default:
			cout<<"\nInvalid choice. Please try again.\n";
			break;
		}
	} while(choice != 3);

	return 0;
}


