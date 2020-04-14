#pragma once

#include "Pokemon.h"
#include "Charmeleon.h"
#include "Attack.h"

class Charmeleon;

class Pikachu : public Pokemon
{

	Attack ElectricRing;
	Attack PikaPunch;

public:
	
	Pikachu(

		std::string electric_ring_string,
		int electric_ring_damage,
		std::string pika_punch_string,
		int pika_punch_damage
	);

	std::string GiveElectricRing() const;
	std::string GivePikaPunch() const;

	void AttackPokemon(Charmeleon& enemy);

};