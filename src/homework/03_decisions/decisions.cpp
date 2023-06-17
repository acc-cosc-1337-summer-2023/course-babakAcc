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


char get_letter_grade_uisng_if(int grade)
{
    char letter_grade;

    if (grade >= 90) {
        letter_grade = 'A';
    } else if (grade >= 80) {
        letter_grade = 'B';
    } else if (grade >= 70) {
        letter_grade = 'C';
    } else if (grade >= 60) {
        letter_grade = 'D';
    } else {
        letter_grade = 'F';
    }
    
    return letter_grade;
}

