#pragma once

#include "Pokemon.h"
#include "Pikachu.h"
#include "Attack.h"

class Pikachu;

class Charmeleon : public Pokemon
{
	Attack HeadButt;
	Attack FireFlare;

public:	
	Charmeleon(

		std::string head_butt_string,
		int head_butt_damage,
		std::string fire_flare_string,
		int fire_flare_damage
	);

	std::string GiveHeadButt() const;
	std::string GiveFireFlare() const;

	void AttackPokemon(Pikachu& enemy);

};