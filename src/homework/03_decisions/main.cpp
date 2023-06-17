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
	cout<<"Letter grade is: "<<letter_grade<<"\n";


	string dna = "AGCTATAG";
	double g_c_content = get_gc_content(dna);

	cout<<"GC-content: " <<g_c_content<<"%"<<"\n";

	return 0;
}