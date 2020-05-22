
// Dit is de source file van Pokemon.h.

#include <iostream>
#include <string>

#include "Pokemon.h"

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