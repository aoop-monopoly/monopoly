#pragma once

#include <vector>
#include <string>

using namespace std;

#define NUMBER_OF_COMMUNITY_CHEST_CARDS 17

enum CommunityChestType
{
    community_chest_1,
    community_chest_2,
    community_chest_3,
    community_chest_4,
    community_chest_5,
    community_chest_6,
    community_chest_7,
    community_chest_8,
    community_chest_9,
    community_chest_10,
    community_chest_11,
    community_chest_12,
    community_chest_13,
    community_chest_14,
    community_chest_15,
    community_chest_16,
    community_chest_17
};

enum ChanceType
{
    chance_1,
    chance_2,
    chance_3,
    chance_4,
    chance_5,
    chance_6,
    chance_7,
    chance_8,
    chance_9,
    chance_10,
    chance_11,
    chance_12,
    chance_13,
    chance_14,
    chance_15,
    chance_16
};


class AnyNonProperty
{
public:
	AnyNonProperty(void);
	~AnyNonProperty(void);

protected:
    vector<string> m_cards;
};

//CommunityChest
class CommunityChest : public AnyNonProperty
{
public:
    CommunityChest();
    ~CommunityChest();
};

//Chance
class Chance : public AnyNonProperty
{
public:
    Chance();
    ~Chance();
};


