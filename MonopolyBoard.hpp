#include "Square.hpp"
#include <vector>

#define NUMBER_OF_SQUARES   40

class MonopolyBoard
{
public:
	MonopolyBoard(void);
	~MonopolyBoard(void);

    void setNumOfPlayers(int players);
    void createPlayers(void);

private:
    int m_num_of_players;
    vector<Player> m_players;
    Square *m_board_squares[NUMBER_OF_SQUARES];
};
