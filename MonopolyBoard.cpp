#include <iostream>

#include "MonopolyBoard.hpp"
#include "AnyNonProperty.hpp"
#include "AnyProperty.hpp"
#include "MyDice.hpp"
#include "Square.hpp"


using  namespace std;

MonopolyBoard::MonopolyBoard(void)
    : m_num_of_players(0),
    m_current_player(0)
{
    m_board_squares[0] = new Square(go, "GO");
    
    AnyProperty *property_old_kent_road = new AnyProperty(1, 60, 30, 50, 2, 10, 30, 90, 160, 250);
    m_board_squares[1] = new Square(property, brown ,"Old Kent Road", property_old_kent_road);

    CommunityChest *non_property_community_chest_1 = new CommunityChest();
    m_board_squares[2] = new Square(community_chest, "Community Chest", non_property_community_chest_1);

    AnyProperty *property_whitechapel_road = new AnyProperty(3, 60, 30, 50, 4, 20, 60, 180, 360, 450);
    m_board_squares[3] = new Square(property, brown, "Whitechapel Road", property_whitechapel_road);

    AnyProperty *income_tax = new AnyProperty(28, 0, 0, 200);
    m_board_squares[4] = new Square(tax, color_tax_office, "Tax Office", income_tax);

    AnyProperty *station_kings_cross = new AnyProperty(5, 200, 100, 25);
    m_board_squares[5] = new Square(station,  color_stations, "King's Cross Station", station_kings_cross);

    AnyProperty *property_the_angel_islington = new AnyProperty(6, 100, 50, 50, 6, 30, 90, 270, 400, 550);
    m_board_squares[6] = new Square(property, blue, "The Angel Islington", property_the_angel_islington);

    Chance *non_property_chance_1 = new Chance();
    m_board_squares[7] = new Square(chance, "Chance", non_property_chance_1);

    AnyProperty *property_euston_road = new AnyProperty(8, 100, 50, 50, 6, 30, 90, 270, 400, 550);
    m_board_squares[8] = new Square(property, blue, "Euston Road", property_euston_road);

    AnyProperty *property_pentonville_road = new AnyProperty(9, 120, 50, 60, 8, 40, 100, 300, 450, 600);
    m_board_squares[9] = new Square(property, blue, "Pentonville Road", property_pentonville_road);
    
    m_board_squares[10] = new Square(jail, "Jail");

    AnyProperty *property_pall_mall = new AnyProperty(11, 140, 100, 70, 10, 50, 150, 450, 625, 750);
    m_board_squares[11] = new Square(property, pink, "Pall Mall", property_pall_mall);

    AnyProperty *utility_electric_company = new AnyProperty(12, 150, 75, 1);
    m_board_squares[12] = new Square(utilities, color_utilities, "Electric Company", utility_electric_company);

    AnyProperty *property_whitehall = new AnyProperty(13, 140, 100, 70, 10, 50, 150, 450, 625, 750);
    m_board_squares[13] = new Square(property, pink, "Whitehall", property_whitehall);

    AnyProperty *property_northumberland_avenue = new AnyProperty(14, 160, 100, 80, 12, 60, 180, 500, 700, 900);
    m_board_squares[14] = new Square(property, pink, "Northumberland Avenue", property_northumberland_avenue);

    AnyProperty *station_marylebone = new AnyProperty(15, 200, 100, 25);
    m_board_squares[15] = new Square(station,  color_stations, "Marylebone Station", station_marylebone);

    AnyProperty *property_bow_street = new AnyProperty(16, 180, 100, 90, 14, 70, 200, 550, 750, 950);
    m_board_squares[16] = new Square(property, orange, "Bow Street", property_bow_street);

    CommunityChest *non_property_community_chest_2 = new CommunityChest();
    m_board_squares[17] = new Square(community_chest, "Community Chest", non_property_community_chest_2);

    AnyProperty *property_marlborough_street = new AnyProperty(18, 180, 100, 90, 14, 70, 200, 550, 750, 950);
    m_board_squares[18] = new Square(property, orange, "Marlborough Street", property_marlborough_street);

    AnyProperty *property_vine_street = new AnyProperty(19, 200, 100, 100, 16, 80, 220, 600, 800, 1000);
    m_board_squares[19] = new Square(property, orange, "Vine Street", property_vine_street);
    
    m_board_squares[20] = new Square(free_parking, "Free Parking");

    AnyProperty *property_strand = new AnyProperty(21, 220, 150, 100, 18, 90, 250, 700, 875, 1050);
    m_board_squares[21] = new Square(property, red, "Strand", property_strand);

    Chance *non_property_chance_2 = new Chance();
    m_board_squares[22] = new Square(chance, "Chance", non_property_chance_2);

    AnyProperty *property_fleet_street = new AnyProperty(23, 220, 150, 110, 18, 90, 250, 700, 875, 1050);
    m_board_squares[23] = new Square(property, red, "Fleet Street", property_fleet_street);

    AnyProperty *property_trafalgar_square = new AnyProperty(24, 240, 150, 120, 20, 100, 300, 750, 925, 1100);
    m_board_squares[24] = new Square(property, red, "Trafalgar Square", property_trafalgar_square);

    AnyProperty *station_fenchurch_st = new AnyProperty(25, 200, 100, 25);
    m_board_squares[25] = new Square(station,  color_stations, "Fenchurch St Station", station_fenchurch_st);

    AnyProperty *property_leicester_square = new AnyProperty(26, 260, 150, 150, 22, 110, 330, 800, 975, 1150);
    m_board_squares[26] = new Square(property, yellow, "Leicester Square", property_leicester_square);

    AnyProperty *property_coventry_street = new AnyProperty(27, 260, 150, 150, 22, 110, 330, 800, 975, 1150);
    m_board_squares[27] = new Square(property, yellow, "Coventry Street", property_coventry_street);

    AnyProperty *utility_water_works = new AnyProperty(28, 150, 75, 1);
    m_board_squares[28] = new Square(utilities, color_utilities, "Water Works", utility_water_works);

    AnyProperty *property_piccadily = new AnyProperty(29, 280, 140, 150, 22, 120, 360, 850, 1025, 1200);
    m_board_squares[29] = new Square(property, yellow, "Piccadilly", property_piccadily);
    
    m_board_squares[30] = new Square(go_to_jail, "Go To Jail");

    AnyProperty *property_regent_street = new AnyProperty(31, 300, 150, 200, 26, 130, 390, 900, 1100, 1275);
    m_board_squares[31] = new Square(property, green, "Regent Street", property_regent_street);

    AnyProperty *property_oxford_street = new AnyProperty(32, 300, 150, 200, 26, 130, 390, 900, 1100, 1275);
    m_board_squares[32] = new Square(property, green, "Oxford Street", property_oxford_street);

    CommunityChest *non_property_community_chest_3 = new CommunityChest();
    m_board_squares[33] = new Square(community_chest, "Community Chest", non_property_community_chest_3);

    AnyProperty *property_bond_street = new AnyProperty(34, 320, 160, 200, 28, 150, 450, 1000, 1200, 1400);
    m_board_squares[34] = new Square(property, green, "Bond Street", property_bond_street);

    AnyProperty *station_liverpool_street = new AnyProperty(35, 200, 100, 25);
    m_board_squares[35] = new Square(station,  color_stations, "Liverpool Street Station", station_liverpool_street);

    Chance *non_property_chance_3 = new Chance();
    m_board_squares[36] = new Square(chance, "Chance", non_property_chance_3);

    AnyProperty *property_park_lane = new AnyProperty(37, 350, 200, 175, 35, 175, 500, 1100, 1300, 1500);
    m_board_squares[37] = new Square(property, dark_blue, "Park Lane", property_park_lane);
    
    m_board_squares[38] = new Square(tax, "TAX");

    AnyProperty *property_mayfair = new AnyProperty(39, 400, 200, 200, 50, 200, 600, 1400, 1700, 2000);
    m_board_squares[39] = new Square(property, dark_blue, " Mayfair", property_mayfair);
}

MonopolyBoard::~MonopolyBoard(void)
{
}

void 
MonopolyBoard::setNumOfPlayers(int players)
{
    m_num_of_players = players;
}

void
MonopolyBoard::createBank()
{
    m_players.push_back(Player());
}


void 
MonopolyBoard::createPlayers(void)
{
    string player_name;
    
    for(int i = 1; i <= m_num_of_players; i++)
    {
        cout << "Please Enter Name of Player " << i << "\n";
        cin >> player_name;

        m_players.push_back(Player(player_name, i));
    }
}

void
MonopolyBoard::playerIstatistics(int player_id)
{
    bool has_asset = false;
    cout << "-- " <<  m_players[player_id].getName() << " turn\n";
    cout << m_players[player_id].getMoney() << "$ and Position : " << m_players[player_id].getPosition() << "\n";

    for(int i = 0; i < NUMBER_OF_SQUARES; i++)
    {
        if(m_board_squares[i]->isProperty())
        {
            if(m_board_squares[i]->getProperty()->getOwner()->getId() == player_id)
            {
                if(!has_asset)
                {
                    has_asset = true;
                    cout << "ASSETS :\n";
                    
                }
                cout << m_board_squares[i]->getSquareName() << "\n";
            }
        }
    }

    if(!has_asset)
    {
        cout << "ASSETS : None\n";
    }
}

int 
MonopolyBoard::getBuiltHouses(PropertyColor color)
{
    int houses = 0;
    for(int i = 1; i < NUMBER_OF_SQUARES; i++)
    {
        if(m_board_squares[i]->getColor() == color)
        {
            houses += m_board_squares[i]->getProperty()->getHouses();
        }
    }

    return houses;
}

int
MonopolyBoard::getMaxHouses(PropertyColor color)
{
    if(color == brown || color == dark_blue)
    {
        return 8;
    }
    else
    {
        return 12;
    }
}

int
MonopolyBoard::getPossiblePropertyForHouseBuilding(PropertyColor color)
{
    int houses = 4;
    int position = m_players[m_current_player].getPosition();
    
    for(int i = NUMBER_OF_SQUARES - 1; i >= 0; i--)
    {
        if(m_board_squares[i]->getColor() == color)
        {
            if(m_board_squares[i]->getProperty()->getHouses() <= houses)
            {
                houses = m_board_squares[i]->getProperty()->getHouses();
                position = m_board_squares[i]->getProperty()->getPosition();
            }
        }
    }

    return position;
}

void
MonopolyBoard::buildHouse(PropertyColor color)
{
    int houses = getBuiltHouses(color);
    int max_houses = getMaxHouses(color);

    cout << "You have" << houses << "houses\n";

    if(houses < max_houses)
    {
        char reply = ' ';
        
        cout << "Dou you want build house? y(Yes) n(No)\n";
        cin >> reply;
        if(reply == 'y')
        {
            int house_to_build = 0;
            while(true)
            {
                cout << "Please enter the number of house(s) : ";
                cin >> house_to_build;
                if((houses + house_to_build) <= MAX_NUMBER_OF_HOUSES)
                {
                    for(int i = 0; i < house_to_build; i++)
                    {
                        int position_to_build = getPossiblePropertyForHouseBuilding(color);
                        m_board_squares[position_to_build]->getProperty()->buildHouse();
                        m_players[PLAYER_BANK].earn(m_board_squares[position_to_build]->getProperty()->houseCost());
                    }
                    break;
                }
                else
                {
                    cout << "Wrong Input!\n";
                }
            }
        }
    }
}

int 
MonopolyBoard::getBuiltHotels(PropertyColor color)
{
    int hotels = 0;
    for(int i = 1; i < NUMBER_OF_SQUARES; i++)
    {
        if(m_board_squares[i]->getColor() == color)
        {
            hotels += m_board_squares[i]->getProperty()->getHotel();
        }
    }

    return hotels;
}

int
MonopolyBoard::getMaxHotels(PropertyColor color)
{
    if(color == brown || color == dark_blue)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int
MonopolyBoard::getPossiblePropertyForHotelBuilding(PropertyColor color)
{
    int position = m_players[m_current_player].getPosition();
    
    for(int i = 0; i < NUMBER_OF_SQUARES; i++)
    {
        if(m_board_squares[i]->getColor() == color)
        {
            if(m_board_squares[i]->getProperty()->getHotel() == 0)
            {
                return m_board_squares[i]->getProperty()->getPosition();
            }
        }
    }

    return position;
}

void
MonopolyBoard::buildHotel(PropertyColor color)
{
    int hotels = getBuiltHotels(color);
    int max_hotels = getMaxHotels(color);
    
    if(getBuiltHouses(color) == getMaxHouses(color) && 
        hotels < max_hotels)
    {
        char reply = ' ';
        
        cout << "Dou you want build hotel? y(Yes) n(No)\n";
        cin >> reply;

        if(reply == 'y')
        {
            int hotels_to_build = 0;
            while(true)
            {
                cout << "Please enter the number of hotel(s) : ";
                cin >> hotels_to_build;
                if((hotels + hotels_to_build) <= max_hotels)
                {
                    for(int i = 0; i < hotels_to_build; i++)
                    {
                        int position_to_build = getPossiblePropertyForHotelBuilding(color);
                        m_board_squares[position_to_build]->getProperty()->buildHotel();
                        m_players[PLAYER_BANK].earn(m_board_squares[position_to_build]->getProperty()->hotelCost());
                    }
                    break;
                }
                else
                {
                    cout << "Wrong Input!\n";
                }
            }
        }
    }
}

bool
MonopolyBoard::isOwnAllColors(PropertyColor color, int position)
{
    Player* owner = m_board_squares[position]->getProperty()->getOwner();
    int count = colorPropertyCount(color);
    for(int i = NUMBER_OF_SQUARES - 1; i >= 0; i--)
    {
        if((m_board_squares[i]->getColor() == color)
            && (owner == m_board_squares[i]->getProperty()->getOwner()))
        {
            count--;
        }
    }
    if(count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int
MonopolyBoard::colorPropertyCount(PropertyColor color)
{
    int ret_value = 0;
    switch(color)
    {
        case brown:
        case dark_blue:
            ret_value = 2;
            break;
        default:
            ret_value = 3;
            break;
    }
    return ret_value;
}

void
MonopolyBoard::visitOwnProperty(int position)
{
    if(isOwnAllColors(m_board_squares[position]->getColor(), position))
    {
        m_board_squares[position]->getProperty()->setOwnColorGroup();
    }

    if(m_board_squares[position]->getProperty()->ownColorGroup())
    {
        buildHouse(m_board_squares[position]->getColor());
        buildHotel(m_board_squares[position]->getColor());
    }
}

void
MonopolyBoard::visitBankProperty(int position)
{
    if(m_board_squares[position]->getType() == tax)
    {
        m_board_squares[position]->getProperty()->payRent(m_players[m_current_player]);
    }
    else
    {
        char reply = ' ';
        
        cout << "Dou you want to buy " << m_board_squares[position]->getSquareName() << "?";
        cin >> reply;

        if(reply == 'y')
        {
            m_board_squares[position]->getProperty()->trade(m_players[m_current_player], m_players[PLAYER_BANK]);
        }
    }
}

void
MonopolyBoard::visitOtherPlayerProperty(int position)
{
    cout << "You are paying " << m_board_squares[position]->getProperty()->rent() << " $ to player " << m_board_squares[position]->getProperty()->getOwner()->getName() << "\n";

    m_board_squares[position]->getProperty()->payRent(m_players[m_current_player]);
}

int
MonopolyBoard::findNearestUtility(int position)
{
    int distance_to_electric_company = abs(position - 12);
    int distance_to_water_works = abs(position - 28);

    return distance_to_electric_company <= distance_to_water_works ? 12 : 28;
}

int
MonopolyBoard::findNearestStation(int position)
{
    int optimum_distance = abs(position - 5);

    if(optimum_distance > abs(position - 15))
    {
        optimum_distance = abs(position - 15);
    }

    if(optimum_distance > abs(position - 25))
    {
        optimum_distance = abs(position - 25);
    }

    if(optimum_distance > abs(position - 35))
    {
        optimum_distance = abs(position - 35);
    }
    return optimum_distance;
}

void
MonopolyBoard::visitNonProperty(int position)
{
    int card = m_board_squares[position]->getNonProperty()->applyCard(m_players[m_current_player], m_players);

    cout <<  m_board_squares[position]->getNonProperty()->getCard(card) << "\n";    
    
    if(m_board_squares[position]->getType() == chance)
    {
        if(card == chance_2)
        {
            movePlayer(24);
        }
        else if(card == chance_3)
        {
            movePlayer(11);
        }
        else if(card == chance_4)
        {
            int position_to_move = findNearestUtility(position);
            if(m_board_squares[position_to_move]->getProperty()->getOwner()->getId() == PLAYER_BANK)
            {
                movePlayer(position_to_move);
            }
            else
            {
                m_players[m_current_player].setPosition(position_to_move);
                MyDice dice(12);
                int rent = 10 * dice.dice();
                m_players[m_current_player].spend(rent);
                m_board_squares[position_to_move]->getProperty()->getOwner()->earn(rent);
            }
        }
        else if(card == chance_5)
        {
            int position_to_move = findNearestStation(position);
            if(m_board_squares[position_to_move]->getProperty()->getOwner()->getId() == PLAYER_BANK)
            {
                movePlayer(position_to_move);
            }
            else
            {
                m_players[m_current_player].setPosition(position_to_move);
                int rent = 2 * m_board_squares[position_to_move]->getProperty()->rent();
                m_players[m_current_player].spend(rent);
                m_board_squares[position_to_move]->getProperty()->getOwner()->earn(rent);
            }
        }
        else if(card == chance_8)
        {
            movePlayer(position - 3);
        }
        else if(card == chance_12)
        {
            if(m_players[m_current_player].getPosition() > 5)
            {
                m_players[m_current_player].earn(200);
                m_players[PLAYER_BANK].spend(200);
            }
            movePlayer(5);
        }
        else if(card == chance_13)
        {
            movePlayer(39);
        }
    }
}

void
MonopolyBoard::movePlayer(int position)
{
    cout << m_players[m_current_player].getName() << " is moving to position " << (position % NUMBER_OF_SQUARES) << "\n";
        
    if(position > NUMBER_OF_SQUARES)
    {
        position = position - NUMBER_OF_SQUARES;
        m_players[m_current_player].earn(200);
        m_players[PLAYER_BANK].spend(200);
    }
    
    m_players[m_current_player].setPosition(position);

    m_board_squares[position]->informSquare();

    if(m_board_squares[position]->isProperty()) //property, station, utilities, tax
    {
        int owner_id = m_board_squares[position]->getProperty()->getOwner()->getId();

        if(m_current_player == owner_id)
        {
           visitOwnProperty(position);
        }
        else if(owner_id == 0)
        {
            visitBankProperty(position);
        }
        else
        {
            visitOtherPlayerProperty(position);
        }
    }
    else if(m_board_squares[position]->isNonProperty())//chance, community_chest
    {
        visitNonProperty(position);
    }
    else//free_parking, jail, go, go_to_jail
    {
        if(m_board_squares[position]->getType() == jail)
        {
            cout << "You are at Jail for visiting purpose.\n";
        }
        else if(m_board_squares[position]->getType() == free_parking)
        {
            cout << "You are at Free Parking.\n";
        }
        else if(m_board_squares[position]->getType() == go)
        {
            cout << "You are at Start. Getting 200$..\n";
            m_players[m_current_player].earn(200);
            m_players[PLAYER_BANK].spend(200);         
        }
        else if(m_board_squares[position]->getType() == go_to_jail)
        {
            cout << "You have to go Jail.\n";
            m_players[m_current_player].setPosition(10);
            m_players[m_current_player].setJail(true);
        }
    }
}

bool
MonopolyBoard::isPlayerAllowedToGo()
{
    if(m_players[m_current_player].getJail() == true)
    {
        m_players[m_current_player].setJail(false);

        if(m_players[m_current_player].getJailFreeCard())
        {
            cout << "You are in Jail and you have a Jail Free Card. Would you like to use it?\n";

            char reply = ' ';
        
            cin >> reply;

            if(reply == 'y')
            {
                m_players[m_current_player].setJailFreeCard(false);
                return true;
            }
        }
        else
        {
            cout << "Unfortunatelly you are in Jail and you have to wait.\n"; 
            return false;
        }
    }

    return true;
}

void
MonopolyBoard::nextPlayer()
{
    if(m_current_player == m_num_of_players)
    {
        m_current_player = 1;
    }
    else
    {
        m_current_player++;
    }
}

void
MonopolyBoard::play()
{
    MyDice dice(12);
    char enter = ' ';

    m_current_player = 1;
    
    while(true)
    {
        playerIstatistics(m_current_player);

        if(isPlayerAllowedToGo())
        {
            movePlayer(m_players[m_current_player].getPosition() + dice.dice());
        }

        nextPlayer();
    }
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
    board.createBank();
    board.createPlayers();

    board.play();

    return 0;
}

