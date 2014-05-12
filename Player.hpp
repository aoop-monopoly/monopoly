
#include <string>

using namespace std;

#define PLAYER_BANK  0

enum PlayerType
{
    bank,
    player  
};

class Player
{
public:
    Player(void);
	Player(string player_name, int player_id);
	~Player(void);

    int getId();
    int getMoney();
    void setPosition(int new_position);
    int getPosition();
    string getName();
    void spend(int money);
    void earn(int money);
    PlayerType getPlayerType();
    void setJail(bool in_jail);
    bool getJail();
    void setJailFreeCard(bool free);
    bool getJailFreeCard();
    void buildHouse();
    int getHouses();
    void buildHotel();
    int getHotels();

private:
    PlayerType m_player_type;
    string m_name;
    int m_id;
    int m_money;
    bool m_in_jail;
    bool m_jail_free_card;
    int m_position;
    int m_houses;
    int m_hotels;    
};

