#pragma once
#include <iostream>
#include <limits.h>

#include "EnergyType.h"
#include "Weakness.h"
#include "Resistance.h"
#include "Attack.h"

class Pokemon
{
public:
	Pokemon(
		std::string attack_1_name,
		int attack_1_damage,
		std::string attack_2_name,
		int attack_2_damage,

		double weakness_multiplier,
		double resistance_value,
		int max_health_points,

		std::string name,
		std::string energy_type,
		std::string weakness,
		std::string resistance
		);

	std::string GiveAttack1() const;
	std::string GiveAttack2() const;
	std::string GiveEnergyType() const;

	Weakness GiveWeakness() const;

	bool AttackPokemon(Pokemon& enemy, bool flag);

	int HealthPoints;
private:
	std::string Name;
	EnergyType energyType;
	Weakness weakness;
	Resistance resistance;
	Attack Attack1;
	Attack Attack2;

};