#include <iostream>
#include <Vector>
#include <variant>
#include <string>

#include "Pokemon.h"

Pokemon::Pokemon(
	std::string attack_1_name,
	int attack_1_damage,
	std::string attack_2_name,
	int attack_2_damage,

	double weakness_multiplier ,
	double resistance_value,
	int max_health_points,

	std::string name,
	std::string energy_type,
	std::string weakness,
	std::string resistance
	)
	:
	energyType{ energy_type },
	weakness{ weakness, weakness_multiplier },
	resistance{ resistance, resistance_value },
	Attack1{attack_1_name, attack_1_damage},
	Attack2{attack_2_name, attack_2_damage}
{

	this->Name = name;
	this->HealthPoints = max_health_points;

}

int* Pokemon::GiveData()
{
	using namespace std;

	variant<int, std::string, EnergyType, Weakness, Resistance, Attack> Data[] =
	{
		HealthPoints,
		Name,
		energyType,
		weakness,
		resistance,
		Attack1,
		Attack2
	};
	
	void* ptr = &Data;
	int* conv = reinterpret_cast<int*> (ptr);

	return conv;
}
