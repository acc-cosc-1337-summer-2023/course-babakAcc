#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test string function value param")
{
	// string lang = "C++";
	// string_value_param(lang);

	// REQUIRE(lang == "Python");
}

TEST_CASE("Test string function value param")
{
	string lang = "C++";
	string_reference_param(lang);

	REQUIRE(lang == "Python");
}