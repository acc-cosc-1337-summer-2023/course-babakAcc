//write include statement for decisions header
#include "decimals.h"
#include <iostream>

using std::string;


//Write code for function(s) code here

char get_letter_grade_using_switch(int grade)
{
    auto grade_tens = grade / 10;

    switch (grade_tens)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'F';
        break;
    }
}


double get_gc_content(const std::string& dnaString) {
    int count_CG = 0;
    int total_Symbols = 0;

    for (char symbol : dnaString) {
        if (symbol == 'C' || symbol == 'G') {
            count_CG++;
        }
        total_Symbols++;
    }

    double gc_Content = static_cast<double>(count_CG) / total_Symbols * 100.0;
    return gc_Content;
}
