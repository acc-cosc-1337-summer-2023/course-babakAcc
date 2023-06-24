#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "func.h"

#include<vector>
using std::vector;



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test largest number finder function")
{
	vector<int> test_vector_1 = {5, 7, -1, 99, -100, 10};
	vector<int> test_vector_2 = {-50, 0, -51, 50, -99, -100};

	REQUIRE(get_vector_max_value(test_vector_1) == 99);
	REQUIRE(get_vector_max_value(test_vector_2) == 50);
}

TEST_CASE("Test square returning function")
{
	vector<int> test1 = {3, 7, 2, 5, 10};
	vector<int> test2 = {6, 1, 8, 9, 4};

	REQUIRE(get_square_of_each_element(test1) == vector<int> {9, 49, 4, 25, 100});
	REQUIRE(get_square_of_each_element(test2) == vector<int> {36, 1, 64, 81, 16});
}
