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

std::string Pokemon::GiveAttack1() const
{
	return Attack1.Name;
}

std::string Pokemon::GiveAttack2() const
{
	return Attack2.Name;
}

std::string Pokemon::GiveEnergyType() const
{
	return energyType.Name;
}

Weakness Pokemon::GiveWeakness() const
{
	return weakness;
}

bool Pokemon::AttackPokemon(Pokemon& enemy, bool flag)
{
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

		if (input == Attack1.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.HealthPoints = enemy.HealthPoints - Attack1.Damage * enemy.GiveWeakness().Multiplier;
			}

			else
			{
				enemy.HealthPoints = enemy.HealthPoints - Attack1.Damage;
			}
		}

		if (input == Attack2.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.HealthPoints = enemy.HealthPoints - Attack2.Damage * enemy.GiveWeakness().Multiplier;
			}

			else
			{
				enemy.HealthPoints = enemy.HealthPoints - Attack2.Damage;
			}
		}

		else if (input != Attack1.Name && input != Attack2.Name)
		{
			std::cout << "Kies een van de bovenstaande attacks\n";
			AttackPokemon(enemy, flag);
		}

		std::cout << "\n";
	}

	else
	{
		flag = true;
	}

	return flag;
}