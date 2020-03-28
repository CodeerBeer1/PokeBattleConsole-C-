#pragma once
#include <iostream>
#include <limits.h>

#include "EnergyType.h"
#include "Weakness.h"
#include "Resistance.h"

class Pokemon
{
public:
	Pokemon(
int weakness_multiplier, int resistance_value, int max_health_points, std::string name, std::string energy_type,
std::string weakness, std::string resistance
		);
private:
	int HealthPoints;

	std::string Name;
	EnergyType EnergyType;
	Weakness Weakness;
	Resistance Resistance;

};