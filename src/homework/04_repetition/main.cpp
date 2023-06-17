//write include statements
#include "repetition.h"
#include<iostream>

using std::cout; using std::cin;
//write using statements

int main() 
{
	string dna_string;

	char keep_going;

	do {
		cout<<"Enter a DNA string(capital letters): ";
		cin>>dna_string;

		double g_c_content = get_gc_content(dna_string);
		cout<<"GC content: "<<g_c_content<<"%"<<"\n";

		cout<<"Do you want to continue? (y/n): ";
		cin>>keep_going;
	} while (keep_going =='Y' || keep_going == 'y');

	return 0;
}
