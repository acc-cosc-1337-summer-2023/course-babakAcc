
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<iostream>
#include<string>

using std:: cout; using std::cin;

int main() 
{
	unique_ptr<TicTacToe> game;
	std::string first_player;
	char user_choice = 'y';
	

	do
	{	
		auto game_type = 0;

		cout<<"Enter game type (3 or 4): ";
		cin>>game_type;

		if(game_type == 3)
		{game = make_unique<TicTacToe3>();}
		else if(game_type == 4)
		{game = make_unique<TicTacToe4>();}

		cout<<"Enter first player: ";
		cin>>first_player;

		if((first_player != "X") && (first_player != "O"))
		{
			do
			{
				cout<<"Please enter first player X or O: ";
				cin>>first_player;
			}while((first_player != "X") && (first_player != "O"));
		}

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}

			if (game->get_winner() == "C")
			{
			cout<<"It's a tie!"<<"\n";
			}
			else
			{
			cout<<"Player" <<game->get_winner()<<" wins!"<<"\n";
			}
		

		cout<<"Play again? y or n ";
		cin>>user_choice;


	}while(user_choice == 'y' || user_choice == 'Y');

	return 0;
}