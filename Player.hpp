
#include <string>
using namespace std;


class Player
{
public:
    Player(void);
	Player(string player_name);
	~Player(void);

    void spend(int money);
    void earn(int money);

private:
    string m_name;
    int m_money;
    bool m_in_jail;
    int m_position;
};
