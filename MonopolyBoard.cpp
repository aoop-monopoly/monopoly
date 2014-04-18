#include <iostream>

#include "MonopolyBoard.hpp"
#include "Bank.hpp"
#include "Square.hpp"

using  namespace std;

MonopolyBoard::MonopolyBoard(void)
    : m_num_of_players(0)
{
}

MonopolyBoard::~MonopolyBoard(void)
{
}

void MonopolyBoard::setNumOfPlayers(int players)
{
    m_num_of_players = players;
}

void MonopolyBoard::addSquare(int position, Square board_square)
{
    m_board_squares[position] = board_square;
}


int main(void)
{
    MonopolyBoard board;
    int players = 0;
    cout << "Monopoly Satrts............... " << endl;
    cout << "Please Enter # of Players : ";

    cin >> players;

	cout << "Number of Player is " << players << "\n"; 

    board.setNumOfPlayers(players);
    

	int a = 0;
	cout << "Wait........";
	cin >> a;
    return 0;
}

