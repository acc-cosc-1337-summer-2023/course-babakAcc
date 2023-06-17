//add include statements
#include "repetition.h"
#include<iostream>

using std::string;

//add function(s) code here
double get_gc_content(const std::string& dna_string) {
    int count = 0;
    int length = dna_string.length();

    for (char c : dna_string) {
        if (c == 'C' || c == 'G') {
            count++;
        }
    }

    double gc_content = (static_cast<double>(count) / length) * 100;
    return gc_content;
}