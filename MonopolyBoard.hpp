#include "Square.hpp"

#define NUMBER_OF_SQUARES   20

class MonopolyBoard
{
public:
	MonopolyBoard(void);
	~MonopolyBoard(void);

    void setNumOfPlayers(int players);
    void addSquare(int position, Square board_square);

private:
    int m_num_of_players;
    Square m_board_squares[NUMBER_OF_SQUARES];
};
