#include "AnyNonProperty.hpp"

#include <iostream>

using  namespace std;

AnyNonProperty::AnyNonProperty(void)
{

}

AnyNonProperty::~AnyNonProperty(void)
{
}

string
AnyNonProperty::getCard(int card)
{
    return m_cards[card];
}

CommunityChest::CommunityChest()
{
    m_cards.push_back("Advance to Go (Collect $200)");
    m_cards.push_back("Bank error in your favor – Collect $200");
    m_cards.push_back("Doctor's fees {fee} – Pay $50");
    m_cards.push_back("From sale of stock you get $50");
    m_cards.push_back("Get Out of Jail Free");
    m_cards.push_back("Go to Jail");
    m_cards.push_back("Grand Opera Night {Opening} – Collect $50 from every player for opening night seats");
    m_cards.push_back("Holiday {Xmas} Fund matures - Receive {Collect} $100");
    m_cards.push_back("Income tax refund – Collect $20");
    m_cards.push_back("It is your birthday - Collect $10 from each player");
    m_cards.push_back("Life insurance matures – Collect $100");
    m_cards.push_back("Pay hospital fees of $100");
    m_cards.push_back("Pay school fees {tax} of $150");
    m_cards.push_back("Receive $25 consultancy fee");
    m_cards.push_back("You are assessed for street repairs – $40 per house – $115 per hotel");
    m_cards.push_back("You have won second prize in a beauty contest – Collect $10");
    m_cards.push_back("You inherit $100 ");
}

CommunityChest::~CommunityChest(void)
{
}

int
CommunityChest::applyCard(Player current_player, vector<Player> players)
{
    int card = rand() + NUMBER_OF_COMMUNITY_CHEST_CARDS;
    int repair_cost = 0;
    switch(card)
    {
        case community_chest_1 :
            current_player.setPosition(0);
            current_player.earn(200);
            players[PLAYER_BANK].spend(200);
            break;
        case community_chest_2 :
            current_player.earn(200);
            players[PLAYER_BANK].spend(200);
            break;
        case community_chest_3 :
            current_player.spend(50);
            players[PLAYER_BANK].earn(50);
            break;
        case community_chest_4 :
            current_player.earn(50);
            players[PLAYER_BANK].spend(50);
            break;
        case community_chest_5 :
            current_player.setJailFreeCard(true);
            break;
        case community_chest_6 :
            current_player.setPosition(10);
            current_player.setJail(true);
            break;
        case community_chest_7 :
            for(unsigned int i = 0; i < players.size(); i++)
            {
                if(current_player.getId() != players[i].getId())
                {
                    current_player.earn(50);
                    players[i].spend(50);
                }
            }
            break;
        case community_chest_8 :
        case community_chest_11 :
        case community_chest_17 :
            current_player.earn(100);
            players[PLAYER_BANK].spend(100);
            break;
        case community_chest_9 :
            current_player.earn(20);
            players[PLAYER_BANK].spend(20);
            break;
        case community_chest_10 :
            for(unsigned int i = 0; i < players.size(); i++)
            {
                if(current_player.getId() != players[i].getId())
                {
                    current_player.earn(10);
                    players[i].spend(10);
                }
            }
            break;
        case community_chest_12 :
            current_player.spend(100);
            players[PLAYER_BANK].earn(100);
            break;
        case community_chest_13 :
            current_player.spend(150);
            players[PLAYER_BANK].earn(150);
            break;
        case community_chest_14 :
            current_player.earn(25);
            players[PLAYER_BANK].spend(25);
            break;
        case community_chest_15 :
            repair_cost = (40 * current_player.getHouses()) + (115 * current_player.getHotels());
            current_player.spend(repair_cost);
            players[PLAYER_BANK].earn(repair_cost);
            break;
        case community_chest_16 :
            current_player.earn(10);
            players[PLAYER_BANK].spend(10);
            break;
        default :
            break;
    }

    return card;
}

Chance::Chance()
{
    m_cards.push_back("Advance to Go (Collect $200)");
    m_cards.push_back("Advance to Trafalgar Square. - If you pass Go, collect $200");
    m_cards.push_back("Advance to Pall Mall – If you pass Go, collect $200");
    m_cards.push_back("Advance token to nearest Utility. If unowned, you may buy it from the Bank. If owned, throw dice and pay owner a total ten times the amount thrown.");
    m_cards.push_back("Advance token to the nearest Station and pay owner twice the rental to which he/she {he} is otherwise entitled. If Railroad is unowned, you may buy it from the Bank.");
    m_cards.push_back("Bank pays you dividend of $50");
    m_cards.push_back("Get out of Jail Free – This card may be kept until needed, or traded/sold");
    m_cards.push_back("Go Back 3 Spaces");
    m_cards.push_back("Go to Jail ");
    m_cards.push_back("Make general repairs on all your property – For each house pay $25 – For each hotel $100");
    m_cards.push_back("Pay poor tax of $15");
    m_cards.push_back("Take a trip to King's Cross Station  – If you pass Go, collect $200");
    m_cards.push_back("Take a walk on the Boardwalk – Advance token to Boardwalk");
    m_cards.push_back("You have been elected Chairman of the Board – Pay each player $50");
    m_cards.push_back("Your building {and} loan matures – Collect $150");
    m_cards.push_back("You have won a crossword competition - Collect $100 ");
}

Chance::~Chance(void)
{
}

int
Chance::applyCard(Player current_player, vector<Player> players)
{
    int card = rand() + NUMBER_OF_CHANCE_CARDS;
    int repair_cost = 0;
    
    switch(card)
    {
        case chance_1 :
            current_player.setPosition(0);
            current_player.earn(200);
            players[PLAYER_BANK].spend(200);
            break;
        case chance_2 :
            if(current_player.getPosition() > 24)
            {
                current_player.earn(200);
                players[PLAYER_BANK].spend(200);
            } 
            break;
        case chance_3 :
            if(current_player.getPosition() > 11)
            {
                current_player.earn(200);
                players[PLAYER_BANK].spend(200);
            }  
            break;
        case chance_4 :
        case chance_5 :
        case chance_8 :
        case chance_12 :
        case chance_13 :
            break;
        case chance_6 :
            current_player.earn(50);
            players[PLAYER_BANK].spend(50);
            break;
        case chance_7 :
            current_player.setJailFreeCard(true);
            break;
        case chance_9 :
            current_player.setPosition(10);
            current_player.setJail(true);
            break;
        case chance_10 :
            repair_cost = (25 * current_player.getHouses()) + (100 * current_player.getHotels());
            current_player.spend(repair_cost);
            players[PLAYER_BANK].earn(repair_cost);
            break;
        case chance_11 :
            current_player.spend(15);
            players[PLAYER_BANK].earn(15);
            break;
        case chance_14 :
            for(unsigned int i = 0; i < players.size(); i++)
            {
                if(current_player.getId() != players[i].getId())
                {
                    current_player.spend(50);
                    players[i].earn(50);
                }
            }
            break;
        case chance_15 :
            current_player.earn(150);
            players[PLAYER_BANK].spend(150);
            break;
        case chance_16 :
            current_player.earn(100);
            players[PLAYER_BANK].spend(100);
            break;
    }

    return card;
}

