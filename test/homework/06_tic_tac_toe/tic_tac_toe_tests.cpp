#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.start_game("Y");
	REQUIRE(game.get_player() == "Y");

	game.start_game("X");
	for(int i = 1; i <= 9; i++)
	{
		game.mark_board(i);
	}
	REQUIRE(game.get_winner() == "C");
}
