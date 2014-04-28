
#include <string>

using namespace std;

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
    string getName();
    void spend(int money);
    void earn(int money);
    PlayerType getPlayerType();    

private:
    PlayerType m_player_type;
    string m_name;
    int m_id;
    int m_money;
    bool m_in_jail;
    int m_position;
};

