#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h";

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test while sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}


TEST_CASE("Test sun of squares w for loop")
{
	REQUIRE(sum_of_squares_for(3) == 14 );
	REQUIRE(sum_of_squares_for(4) == 30 );
	REQUIRE(sum_of_squares_for(5) == 55 );
}
