#include <iostream>

#include "MonopolyBoard.hpp"
#include "Bank.hpp"
#include "Square.hpp"
#include "Player.hpp"


using  namespace std;

MonopolyBoard::MonopolyBoard(void)
    : m_num_of_players(0)
{
    m_board_squares[0] = new Square(SquareType::go);
    m_board_squares[1] = new Square(SquareType::property, "Mediterrranean Avenue");
    m_board_squares[2] = new Square(SquareType::community_chest);
    m_board_squares[3] = new Square(SquareType::property, "Baltic Avenue");
    m_board_squares[4] = new Square(SquareType::tax);
    m_board_squares[5] = new Square(SquareType::station,  "Reading Railroad");
    m_board_squares[6] = new Square(SquareType::property, "Oriental Avenue");
    m_board_squares[7] = new Square(SquareType::chance);
    m_board_squares[8] = new Square(SquareType::property, "Vermont Avenue");
    m_board_squares[9] = new Square(SquareType::property, "Connecticut Avenue");
    m_board_squares[10] = new Square(SquareType::jail);
    m_board_squares[11] = new Square(SquareType::property, "Pall Mall");
    m_board_squares[12] = new Square(SquareType::utilities, "Electric Company");
    m_board_squares[13] = new Square(SquareType::property, "Whitehall");
    m_board_squares[14] = new Square(SquareType::property, "Northumberland Avenue");
    m_board_squares[15] = new Square(SquareType::station,  "Marylebone Station");
    m_board_squares[16] = new Square(SquareType::property, "Bow Street");
    m_board_squares[17] = new Square(SquareType::community_chest);
    m_board_squares[18] = new Square(SquareType::property, "Marlborough Street");
    m_board_squares[19] = new Square(SquareType::property, "Vine Street");
    m_board_squares[20] = new Square(SquareType::free_parking);
    m_board_squares[21] = new Square(SquareType::property, "Strand");
    m_board_squares[22] = new Square(SquareType::chance);
    m_board_squares[23] = new Square(SquareType::property, "Fleet Street");
    m_board_squares[24] = new Square(SquareType::property, "Trafalgar Square");
    m_board_squares[25] = new Square(SquareType::station,  "Fenchurch St Station");
    m_board_squares[26] = new Square(SquareType::property, "Leicester Square");
    m_board_squares[27] = new Square(SquareType::property, "Coventry Street");
    m_board_squares[28] = new Square(SquareType::utilities, "Water Works");
    m_board_squares[29] = new Square(SquareType::property, "Piccadilly");
    m_board_squares[30] = new Square(SquareType::go_to_jail);
    m_board_squares[31] = new Square(SquareType::property, "Regent Street");
    m_board_squares[32] = new Square(SquareType::property, "Oxford Street");
    m_board_squares[33] = new Square(SquareType::community_chest);
    m_board_squares[34] = new Square(SquareType::property, "Bond Street");
    m_board_squares[35] = new Square(SquareType::station,  "Liverpool Street Station");
    m_board_squares[36] = new Square(SquareType::chance);
    m_board_squares[37] = new Square(SquareType::property, "Park Lane");
    m_board_squares[38] = new Square(SquareType::tax);
    m_board_squares[39] = new Square(SquareType::property, " Mayfair");
}

MonopolyBoard::~MonopolyBoard(void)
{
}

void MonopolyBoard::setNumOfPlayers(int players)
{
    m_num_of_players = players;
}


void MonopolyBoard::buildBoard(void)
{
    
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

