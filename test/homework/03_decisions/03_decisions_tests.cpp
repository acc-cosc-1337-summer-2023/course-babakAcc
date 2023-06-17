#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"
#include<iostream>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Numerical grade converter function that uses switch case")
{

	REQUIRE(get_letter_grade_using_switch(95) == 'A');
	REQUIRE(get_letter_grade_using_switch(85) == 'B');
	REQUIRE(get_letter_grade_using_switch(75) == 'C');
	REQUIRE(get_letter_grade_using_switch(65) == 'D');
	REQUIRE(get_letter_grade_using_switch(50) == 'F');
}

TEST_CASE("Test Numerical grade conventor function that uses if clauses")
{
	REQUIRE(get_letter_grade_uisng_if(95) == 'A');
	REQUIRE(get_letter_grade_uisng_if(85) == 'B');
	REQUIRE(get_letter_grade_uisng_if(75) == 'C');
	REQUIRE(get_letter_grade_uisng_if(65) == 'D');
	REQUIRE(get_letter_grade_uisng_if(50) == 'F');
}

