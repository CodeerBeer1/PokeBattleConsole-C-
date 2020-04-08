#pragma once
#include "Pokemon.h"
#include "Pikachu.h"

class Charmeleon : public Pokemon
{
	Attack HeadButt;
	Attack FireFlare;

public:
	std::string GiveHeadButt() const;
	std::string GiveFireFlare() const;

	void AttackPokemon(Pikachu& enemy);

	Charmeleon(

		std::string head_butt_string,
		int head_butt_damage,
		std::string fire_flare_string,
		int fire_flare_damage
	);
};