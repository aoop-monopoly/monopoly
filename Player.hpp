
#include <string>
using namespace std;


class Player
{
public:
	Player(string player_name);
	~Player(void);

private:
    string name;
    int money;
    bool in_jail;
    int position;
};
