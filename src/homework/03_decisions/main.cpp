//write include statements
#include "decisions.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	int numerical_grade;
	cout<<"Enter numerical grade: ";
	cin>>numerical_grade;

	char letter_grade = get_letter_grade_using_switch(numerical_grade);
	cout<<"Letter grade using switch: "<<letter_grade<<"\n";

	char letter_grade_if = get_letter_grade_uisng_if(numerical_grade);
	cout<<"Letter grade using if-else if: "<<letter_grade_if<<"\n";

	return 0;
}