#include <iostream>

#include "MonopolyBoard.hpp"
#include "AnyProperty.hpp"
#include "Bank.hpp"
#include "Square.hpp"


using  namespace std;

MonopolyBoard::MonopolyBoard(void)
    : m_num_of_players(0)
{
    m_board_squares[0] = new Square(SquareType::go);
    
    OldKentRoad *property_old_kent_road = new OldKentRoad();
    m_board_squares[1] = new Square(SquareType::property, "Old Kent Road", property_old_kent_road);

    m_board_squares[2] = new Square(SquareType::community_chest);

    WhitechapelRoad *property_whitechapel_road = new WhitechapelRoad();
    m_board_squares[3] = new Square(SquareType::property, "Whitechapel Road", property_whitechapel_road);
    
    m_board_squares[4] = new Square(SquareType::tax);
    
    m_board_squares[5] = new Square(SquareType::station,  "King's Cross Station");

    TheAngelIslington *property_the_angel_islington = new TheAngelIslington();
    m_board_squares[6] = new Square(SquareType::property, "The Angel Islington", property_the_angel_islington);
    
    m_board_squares[7] = new Square(SquareType::chance);

    EustonRoad *property_euston_road = new EustonRoad();
    m_board_squares[8] = new Square(SquareType::property, "Euston Road", property_euston_road);

    PentonvilleRoad *property_pentonville_road = new PentonvilleRoad();
    m_board_squares[9] = new Square(SquareType::property, "Pentonville Road", property_pentonville_road);
    
    m_board_squares[10] = new Square(SquareType::jail);

    PallMall *property_pall_mall = new PallMall();
    m_board_squares[11] = new Square(SquareType::property, "Pall Mall", property_pall_mall);
    
    m_board_squares[12] = new Square(SquareType::utilities, "Electric Company");

    Whitehall *property_whitehall = new Whitehall();
    m_board_squares[13] = new Square(SquareType::property, "Whitehall", property_whitehall);

    NorthumberlandAvenue *property_northumberland_avenue = new NorthumberlandAvenue();
    m_board_squares[14] = new Square(SquareType::property, "Northumberland Avenue", property_northumberland_avenue);
    
    m_board_squares[15] = new Square(SquareType::station,  "Marylebone Station");

    BowStreet *property_bow_street = new BowStreet();
    m_board_squares[16] = new Square(SquareType::property, "Bow Street", property_bow_street);
    
    m_board_squares[17] = new Square(SquareType::community_chest);

    MarlboroughStreet *property_marlborough_street = new MarlboroughStreet();
    m_board_squares[18] = new Square(SquareType::property, "Marlborough Street", property_marlborough_street);

    VineStreet *property_vine_street = new VineStreet();
    m_board_squares[19] = new Square(SquareType::property, "Vine Street", property_vine_street);
    
    m_board_squares[20] = new Square(SquareType::free_parking);

    Strand *property_strand = new Strand();
    m_board_squares[21] = new Square(SquareType::property, "Strand", property_strand);
    
    m_board_squares[22] = new Square(SquareType::chance);

    FleetStreet *property_fleet_street = new FleetStreet();
    m_board_squares[23] = new Square(SquareType::property, "Fleet Street", property_fleet_street);

    TrafalgarSquare *property_trafalgar_square = new TrafalgarSquare();
    m_board_squares[24] = new Square(SquareType::property, "Trafalgar Square", property_trafalgar_square);
    
    m_board_squares[25] = new Square(SquareType::station,  "Fenchurch St Station");

    LeicesterSquare *property_leicester_square = new LeicesterSquare();
    m_board_squares[26] = new Square(SquareType::property, "Leicester Square", property_leicester_square);

    CoventryStreet *property_coventry_street = new CoventryStreet();
    m_board_squares[27] = new Square(SquareType::property, "Coventry Street", property_coventry_street);
    
    m_board_squares[28] = new Square(SquareType::utilities, "Water Works");

    Piccadilly *property_piccadily = new Piccadilly();
    m_board_squares[29] = new Square(SquareType::property, "Piccadilly", property_piccadily);
    
    m_board_squares[30] = new Square(SquareType::go_to_jail);

    RegentStreet *property_regent_street = new RegentStreet();
    m_board_squares[31] = new Square(SquareType::property, "Regent Street", property_regent_street);

    OxfordStreet *property_oxford_street = new OxfordStreet();
    m_board_squares[32] = new Square(SquareType::property, "Oxford Street", property_oxford_street);
    
    m_board_squares[33] = new Square(SquareType::community_chest);

    BondStreet *property_bond_street = new BondStreet();
    m_board_squares[34] = new Square(SquareType::property, "Bond Street", property_bond_street);
    
    m_board_squares[35] = new Square(SquareType::station,  "Liverpool Street Station");
    
    m_board_squares[36] = new Square(SquareType::chance);

    ParkLane *property_park_lane = new ParkLane();
    m_board_squares[37] = new Square(SquareType::property, "Park Lane", property_park_lane);
    
    m_board_squares[38] = new Square(SquareType::tax);

    Mayfair *property_mayfair = new Mayfair();
    m_board_squares[39] = new Square(SquareType::property, " Mayfair", property_mayfair);
}

MonopolyBoard::~MonopolyBoard(void)
{
}

void MonopolyBoard::setNumOfPlayers(int players)
{
    m_num_of_players = players;
}


void MonopolyBoard::buildBoard(void)
{
    
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
    

	int a = 0;
	cout << "Wait........";
	cin >> a;
    return 0;
}

