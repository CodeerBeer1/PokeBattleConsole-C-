
// Dit is de source file van Pikachu.h.

#include "Pikachu.h"

// Pikachu properties worden door de constructor hieronder initialiseerd.

Pikachu::Pikachu(

	std::string electric_ring_string, 
	int electric_ring_damage, 
	std::string pika_punch_string, 
	int pika_punch_damage

)
	:

	// Omdat Pikachu inherit van Pokemon class, is pokemon automatisch de eerste member van Pikachu en worden zijn properties werkelijk hier gedefinieerd.
	Pokemon(2, 1, 500, "Pikachu", "Lightning", "Fire", "Fighting"),
	ElectricRing{electric_ring_string, electric_ring_damage},
	PikaPunch{pika_punch_string, pika_punch_damage}
{
}

// Hieronder staan de declaraties van de Getters.

std::string Pikachu::GiveElectricRing() const
{
	return ElectricRing.Name;
}

std::string Pikachu::GivePikaPunch() const
{
	return PikaPunch.Name;
}

// Dit is de declaratie van de attack function.

void Pikachu::AttackPokemon(Charmeleon& enemy)
{

	// De pokemon valt aan indien het genoeg HP heeft.
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

		// De HP van de enemy word vermindert afhankelijk van de soort van de pokemon. Als de enemy er slecht tegen kan wordt het vermenigvuldigd-
		// met de Weakness multiplier, zo niet, dan met de resistance multiplier.
		if (input == ElectricRing.Name)
		{
			
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(ElectricRing.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(ElectricRing.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(ElectricRing.Damage, 0);
			}
		}

		if (input == PikaPunch.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(PikaPunch.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(PikaPunch.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(PikaPunch.Damage, 0);
			}
		}

		// Als de invoer ongeldig is word de function opnieuw uitgevoerd.
		else if (input != ElectricRing.Name && input != PikaPunch.Name)
		{
			std::cout << "Kies een van de bovenstaande attacks\n";
			AttackPokemon(enemy);
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