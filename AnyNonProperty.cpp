#include "AnyNonProperty.hpp"

#include <iostream>

using  namespace std;

AnyNonProperty::AnyNonProperty(void)
{

}

AnyNonProperty::~AnyNonProperty(void)
{
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

Chance::Chance()
{
    m_cards.push_back("Advance to Go (Collect $200)");
    m_cards.push_back("Advance to Illinois Ave. - If you pass Go, collect $200");
    m_cards.push_back("Advance to St. Charles Place – If you pass Go, collect $200");
    m_cards.push_back("Advance token to nearest Utility. If unowned, you may buy it from the Bank. If owned, throw dice and pay owner a total ten times the amount thrown.");
    m_cards.push_back("Advance token to the nearest Railroad and pay owner twice the rental to which he/she {he} is otherwise entitled. If Railroad is unowned, you may buy it from the Bank.");
    m_cards.push_back("Bank pays you dividend of $50");
    m_cards.push_back("Get out of Jail Free – This card may be kept until needed, or traded/sold");
    m_cards.push_back("Go Back 3 Spaces");
    m_cards.push_back("Go to Jail ");
    m_cards.push_back("Make general repairs on all your property – For each house pay $25 – For each hotel $100");
    m_cards.push_back("Pay poor tax of $15");
    m_cards.push_back("Take a trip to Reading Railroad {Take a ride on the Reading} – If you pass Go, collect $200");
    m_cards.push_back("Take a walk on the Boardwalk – Advance token to Boardwalk");
    m_cards.push_back("You have been elected Chairman of the Board – Pay each player $50");
    m_cards.push_back("Your building {and} loan matures – Collect $150");
    m_cards.push_back("You have won a crossword competition - Collect $100 ");
}

Chance::~Chance(void)
{
}


