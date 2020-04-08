#pragma once
#include <iostream>

#include "Pikachu.h"
#include "Charmeleon.h"
#include "EnergyType.h"
#include "Weakness.h"
#include "Resistance.h"
#include "Attack.h"

class Pokemon
{
protected:
	double HealthPoints;

	std::string Name;
	EnergyType energyType;
	Weakness weakness;
	Resistance resistance;

public:
	Pokemon(

		int weakness_multiplier,
		int resistance_multiplier,
		int max_health_points,

		std::string name,
		std::string energy_type,
		std::string weakness,
		std::string resistance
		);


	bool Status = true;

	std::string GiveEnergyType() const;
	std::string GiveName();

	int GetHP();
	void ReduceHP(int damage, int multiplier);

	Weakness GiveWeakness() const;
	Resistance GiveResistance() const;

};