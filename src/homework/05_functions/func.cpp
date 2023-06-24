//add include statements
#include<iostream>

#include "func.h"

using std::cout;


//add function code here
int get_vector_max_value(const vector<int>& numbers)
{
    int largest = numbers[0];

    for(int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    return largest;
}

vector<int> get_square_of_each_element(const vector<int>& numbers)
{
    vector<int> square_nums;

    for(int num: numbers)
    {
        int square = num * num;
        square_nums.push_back(square);
    }
    return square_nums;
}

