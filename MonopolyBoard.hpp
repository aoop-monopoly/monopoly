#include "Square.hpp"

#define NUMBER_OF_SQUARES   40

class MonopolyBoard
{
public:
	MonopolyBoard(void);
	~MonopolyBoard(void);

    void setNumOfPlayers(int players);
    void buildBoard(void);

private:
    int m_num_of_players;
    Square *m_board_squares[NUMBER_OF_SQUARES];
};
