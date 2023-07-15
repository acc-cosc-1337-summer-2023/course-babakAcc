//h
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::string; using std::vector; using std::cout; using std::cin; using std::unique_ptr; using std::make_unique;
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size*size," "){};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;

    
    string get_winner() const{return winner;}

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:

    string player;
    string winner;
    
    void clear_board();
    void set_next_player();
    bool check_board_full() const;


    void set_winner();

};

#endif