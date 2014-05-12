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
    int getBuiltHouses(PropertyColor color);
    int getMaxHouses(PropertyColor color);
    int getPossiblePropertyForHouseBuilding(PropertyColor color);
    void buildHouse(PropertyColor color);
    int getBuiltHotels(PropertyColor color);
    int getMaxHotels(PropertyColor color);
    int getPossiblePropertyForHotelBuilding(PropertyColor color);
    void buildHotel(PropertyColor color);
    void visitOwnProperty(int position);
    void visitBankProperty(int position);
    void visitOtherPlayerProperty(int position);
    int findNearestUtility(int position);
    int findNearestStation(int position);
    void visitNonProperty(int position);
    void movePlayer(int amount);
    bool isPlayerAllowedToGo();
    void play(void);

private:
    int m_num_of_players;
    int m_current_player;
    vector<Player> m_players;
    Square *m_board_squares[NUMBER_OF_SQUARES];
};
