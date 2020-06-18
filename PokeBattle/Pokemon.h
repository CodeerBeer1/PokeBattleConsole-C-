
// Dit is de header bestand waar de 'Pokemon' gemaakt is.

#pragma once

#include <iostream>

#include "EnergyType.h"
#include "Weakness.h"
#include "Resistance.h"
#include "Attack.h"

// Pokemon class heeft alle methods en properties die elke pokemon heeft.

class Pokemon
{

	// Bij protected hebben alleen child-classes toegang.
protected:
	double HealthPoints;

	std::string Name;
	EnergyType energyType;
	Weakness weakness;
	Resistance resistance;

	// Bij public staan alle methods en properties die de "buitenwereld" mag zien.
public:

	// Constructor stelt waardes vast voor een pokemon.
	Pokemon(

		int weakness_multiplier,
		int resistance_multiplier,
		int max_health_points,

		std::string name,
		std::string energy_type,
		std::string weakness,
		std::string resistance
		);

	// Status geeft aan of de pokemon nog uitgeschakeld is of niet.
	bool Status = true;

	// Hieronder staan allerlij Getters functions die de "buitenwereld" informatie geeft als het van toepassing is.
	std::string GiveEnergyType() const;
	std::string GiveName();

	int GetHP();
	void ReduceHP(int damage, int multiplier);

	Weakness GiveWeakness() const;
	Resistance GiveResistance() const;

	// Met dit function valt het de andere pokemon aan, en refereert de enemy als argument en daarnaast worden zijn eigen attacks ook meegestuurd.
	void AttackPokemon(Pokemon& enemy, Attack firstattack, Attack secondattack);

};