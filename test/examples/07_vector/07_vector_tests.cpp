#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// TEST_CASE("Test vector value parameter")
// {
// 	vector<int> nums{1, 5, 10};
// 	vector<int> expected{20, 5, 10};

// 	vector_value_param(nums);

// 	REQUIRE(nums == expected);
// }