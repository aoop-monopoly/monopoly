#include "Square.hpp"
#include <vector>

#define NUMBER_OF_SQUARES   40

class MonopolyBoard
{
public:
	MonopolyBoard(void);
	~MonopolyBoard(void);

    void setNumOfPlayers(int players);
    void createBank(void);
    void createPlayers(void);
    void playerIstatistics(int player_id);
    void movePlayer(int amount);
    void play(void);

private:
    int m_num_of_players;
    int m_current_player;
    vector<Player> m_players;
    Square *m_board_squares[NUMBER_OF_SQUARES];
};
