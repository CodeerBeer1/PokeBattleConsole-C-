#include "Charmeleon.h"

Charmeleon::Charmeleon(std::string head_butt_string, int head_butt_damage, std::string fire_flare_string, int fire_flare_damage)
	:
	Pokemon(2, 1, 500, "Pikachu", "Lightning", "Fire", "Fighting"),
	HeadButt{ head_butt_string, head_butt_damage },
	FireFlare{ fire_flare_string, fire_flare_damage }
{
}

std::string Charmeleon::GiveHeadButt() const
{
	return HeadButt.Name;
}

std::string Charmeleon::GiveFireFlare() const
{
	return FireFlare.Name;
}

void Charmeleon::AttackPokemon(Pikachu& enemy)
{
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

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

		else if (input != HeadButt.Name && input != FireFlare.Name)
		{
			std::cout << "Kies een van de bovenstaande attacks\n";
			AttackPokemon(enemy);
		}

		std::cout << "\n";
	}

	if (enemy.GetHP() <= 0)
	{
		enemy.Status = false;
		std::cout << enemy.GiveName() << " fainted. " << Name << " is de winnaar!";
	}
}