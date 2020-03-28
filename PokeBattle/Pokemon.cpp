#include <iostream>

#include "Pokemon.h"

Pokemon::Pokemon(
	int weakness_multiplier , int resistance_value, int max_health_points, std::string name,
	std::string energy_type, std::string weakness, std::string resistance
	)
	:
	EnergyType{ energy_type },
	Weakness{ weakness, weakness_multiplier },
	Resistance{ resistance, resistance_value }
{

	this->Name = name;
	this->HealthPoints = max_health_points;

};
