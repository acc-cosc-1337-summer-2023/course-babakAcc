#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test DNA function")
{
	string dna = "AGCTATAG";

	REQUIRE(get_gc_content(dna) == 37.5);
}