
// Dit is de source file van Pokemon.h.

#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Attack.h"

// Pokemon properties worden door de constructor hieronder initialiseerd.

Pokemon::Pokemon(

	int weakness_multiplier,
	int resistance_multiplier,
	int max_health_points,

	std::string name,
	std::string energy_type,
	std::string weakness,
	std::string resistance
	)
	:
	Name(name),
	HealthPoints(max_health_points),
	energyType{ energy_type },
	weakness{ weakness, weakness_multiplier },
	resistance{ resistance, resistance_multiplier }
{
}

// Hieronder zijn alle Getter functions die waardes returnen van bepaalde properties.

std::string Pokemon::GiveEnergyType() const
{
	return energyType.Name;
}

std::string Pokemon::GiveName()
{
	return Name;
}

int Pokemon::GetHP()
{
	return HealthPoints;
}


// Behalve ReduceHP(), dit is een Setter function, die veranderingen aan de property toebrengt in plaats van het uitgeven.
void Pokemon::ReduceHP(int damage, int multiplier)
{
	HealthPoints = HealthPoints - (damage * multiplier); 
}

Weakness Pokemon::GiveWeakness() const
{
	return weakness;
}

Resistance Pokemon::GiveResistance() const
{
	return resistance;
}

// Dit is de declaratie van de attack function.

void Pokemon::AttackPokemon(Pokemon& enemy, Attack firstattack, Attack secondattack)
{

	// De pokemon valt aan indien het genoeg HP heeft.
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

		// De HP van de enemy word vermindert afhankelijk van de soort van de pokemon. Als de enemy er slecht tegen kan wordt het vermenigvuldigd-
		// met de Weakness multiplier, zo niet, dan met de resistance multiplier.
		if (input == firstattack.Name)
		{

			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(firstattack.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(firstattack.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(firstattack.Damage, 0);
			}
		}

		if (input == secondattack.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(secondattack.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(secondattack.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(secondattack.Damage, 0);
			}
		}

		// Als de invoer ongeldig is word de function opnieuw uitgevoerd.
		else if (input != firstattack.Name && input != secondattack.Name)
		{
			std::cout << "Kies een van de bovenstaande attacks\n";
			AttackPokemon(enemy, firstattack, secondattack);
		}

		std::cout << "\n";
	}

	// Als de enemy geen HP meer heeft, word zijn 'Status' als false toegewezen.

	if (enemy.GetHP() <= 0)
	{
		enemy.Status = false;
		std::cout << enemy.GiveName() << " fainted. " << Name << " is de winnaar!";
	}
}