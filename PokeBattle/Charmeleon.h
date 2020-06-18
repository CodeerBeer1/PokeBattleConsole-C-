
// Dit is de header bestand waar Charmeleon class gemaakt wordt.

#pragma once

#include "Pokemon.h"
#include "Pikachu.h"
#include "Attack.h"

// Charmeleon class is een pokemon dus inherit het de pokemon class zodat het alles heeft wat een pokemon normaalgesproken heeft.

class Charmeleon : public Pokemon
{

	// Alleen de aanvullende properties die een pokemon dus uniek maakt worden hier gecreëerd.
	Attack HeadButt;
	Attack FireFlare;

public:	

	// Constructor die de naam en schade van de attacks vaststelt.
	Charmeleon(

		std::string head_butt_string,
		int head_butt_damage,
		std::string fire_flare_string,
		int fire_flare_damage
	);

	// Getters die de naam van attacks returnen.
	Attack GiveHeadButt() const;
	Attack GiveFireFlare() const;

};