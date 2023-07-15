#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//TicTacToe3 test cases

TEST_CASE("Test TicTacToe3 winner is C when board is full and game over") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	
	REQUIRE(game->game_over() == true);

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player is X") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player is O") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left") 
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);

	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

//TicTacToe4 test cases

TEST_CASE("Test TicTacToe4 winner is C when board is full and game over") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    
    REQUIRE(game->game_over() == true);

    REQUIRE(game->get_winner() == "C");
}

TEST_CASE("TicTacToe4 Test first player is X") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");
    REQUIRE(game->get_player() == "X");
}

TEST_CASE("TicTacToe4 Test first player is O") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
    
    game->start_game("O");
    REQUIRE(game->get_player() == "O");
}

TEST_CASE("TicTacToe4 Test win by first column") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(1);
	REQUIRE(game->game_over() == false);
    game->mark_board(2);
	REQUIRE(game->game_over() == false);
    game->mark_board(5);
	REQUIRE(game->game_over() == false);
    game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
    game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by second column") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(2);
	REQUIRE(game->game_over() == false);
    game->mark_board(1);
	REQUIRE(game->game_over() == false);
    game->mark_board(6);
	REQUIRE(game->game_over() == false);
    game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
    game->mark_board(14);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by third column") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
	game->mark_board(4);
    REQUIRE(game->game_over() == false);
	game->mark_board(15);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by fourth column") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by first row") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by second row") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(5);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(8);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by third row") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(9);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(12);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win by fourth row") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(14);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(15);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win diagonally from top left") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(6);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(11);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);
    REQUIRE(game->game_over() == false);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("TicTacToe4 Test win diagonally from bottom left") 
{
    unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

    game->start_game("X");

    game->mark_board(13);
    REQUIRE(game->game_over() == false);
    game->mark_board(1);
    REQUIRE(game->game_over() == false);
    game->mark_board(10);
    REQUIRE(game->game_over() == false);
    game->mark_board(2);
    REQUIRE(game->game_over() == false);
    game->mark_board(7);
    REQUIRE(game->game_over() == false);
    game->mark_board(3);
    REQUIRE(game->game_over() == false);
    game->mark_board(4);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}