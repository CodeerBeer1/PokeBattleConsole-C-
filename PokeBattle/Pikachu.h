#pragma once
#include "Pokemon.h"
#include "Charmeleon.h"

class Pikachu : public Pokemon
{

	Attack ElectricRing;
	Attack PikaPunch;

public:
	std::string GiveElectricRing() const;
	std::string GivePikaPunch() const;

	void AttackPokemon(Charmeleon& enemy);

	Pikachu(

		std::string electric_ring_string,
		int electric_ring_damage,
		std::string pika_punch_string,
		int pika_punch_damage
	);

};