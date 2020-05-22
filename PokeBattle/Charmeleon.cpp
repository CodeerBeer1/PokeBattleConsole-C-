
// Dit is de source file van Charmeleon.h.

#include "Charmeleon.h"

// Charmeleon properties worden door de constructor hieronder initialiseerd.

Charmeleon::Charmeleon(

	std::string head_butt_string, 
	int head_butt_damage, std::string 
	fire_flare_string, 
	int fire_flare_damage

)
	:

	// Omdat Charmeleon inherit van Pokemon class, is pokemon automatisch de eerste member van Charmeleon en worden zijn properties werkelijk hier gedefinieerd.
	Pokemon(2, 1, 500, "Charmeleon", "Fire", "Water", "Lightning"),
	HeadButt{ head_butt_string, head_butt_damage },
	FireFlare{ fire_flare_string, fire_flare_damage }
{
}

// Hieronder staan de declaraties van de Getters.

std::string Charmeleon::GiveHeadButt() const
{
	return HeadButt.Name;
}

std::string Charmeleon::GiveFireFlare() const
{
	return FireFlare.Name;
}

// Dit is de declaratie van de attack function.

void Charmeleon::AttackPokemon(Pikachu& enemy)
{

	// De pokemon valt aan indien het genoeg HP heeft.
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

		// De HP van de enemy word vermindert afhankelijk van de soort van de pokemon. Als de enemy er slecht tegen kan wordt het vermenigvuldigd-
		// met de Weakness multiplier, zo niet, dan met de resistance multiplier.
		if (input == HeadButt.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(HeadButt.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(HeadButt.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(HeadButt.Damage, 0);
			}
		}

		if (input == FireFlare.Name)
		{
			if (energyType.Name == enemy.GiveWeakness().Name)
			{
				enemy.ReduceHP(FireFlare.Damage, enemy.GiveWeakness().Multiplier);
			}

			if (energyType.Name == enemy.GiveResistance().Name)
			{
				enemy.ReduceHP(FireFlare.Damage, enemy.GiveResistance().Multiplier);
			}

			else
			{
				enemy.ReduceHP(FireFlare.Damage, 0);
			}
		}

		// Als de invoer ongeldig is word de function opnieuw uitgevoerd.
		else if (input != HeadButt.Name && input != FireFlare.Name)
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