
// Dit is de header bestand waar Charmeleon class gemaakt wordt.

#pragma once

#include "Pokemon.h"
#include "Pikachu.h"
#include "Attack.h"

// Om de lus te voorkomen dat de 2 header files steeds elkaar #include'en, is een kopie van die class hier gemaakt.
class Pikachu;

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
	std::string GiveHeadButt() const;
	std::string GiveFireFlare() const;

	// Met dit function valt het de andere pokemon aan, en refereert de enemy als argument.
	void AttackPokemon(Pikachu& enemy);

};