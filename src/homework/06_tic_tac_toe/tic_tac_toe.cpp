//cpp
#include "tic_tac_toe.h"


using std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    if(check_board_full())
    {
       std::string winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i = 0; i < pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

// private functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win()
{
    for(int col =0; col < 3; col++)
    {
        if(pegs[col] != " " && pegs[col] == pegs[col + 3] && pegs[col] == pegs[col + 6])
        {
            return true;
        }
        
    }

    return false;
}

bool TicTacToe::check_row_win()
{
    for (int row = 0; row < 9; row += 3)
    {
        if (pegs[row] != " " && pegs[row] == pegs[row + 1] && pegs[row] == pegs[row + 2])
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
    {
        return true;
    }
    if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6])
    {
        return true;
    }

    return false;
}

void TicTacToe::set_winner()
{
   std::string winner = (player == "X") ? "O" : "X";
}