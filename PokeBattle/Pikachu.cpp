#include "Pikachu.h"

Pikachu::Pikachu(

	std::string electric_ring_string, 
	int electric_ring_damage, 
	std::string pika_punch_string, 
	int pika_punch_damage

)
	:
	Pokemon(2, 1, 500, "Pikachu", "Lightning", "Fire", "Fighting"),
	ElectricRing{electric_ring_string, electric_ring_damage},
	PikaPunch{pika_punch_string, pika_punch_damage}
{
}

std::string Pikachu::GiveElectricRing() const
{
	return ElectricRing.Name;
}

std::string Pikachu::GivePikaPunch() const
{
	return PikaPunch.Name;
}

void Pikachu::AttackPokemon(Charmeleon& enemy)
{
	if (HealthPoints > 0)
	{
		std::cout << "Attack: ";
		std::string input;
		std::cin >> input;

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

		else if (input != ElectricRing.Name && input != PikaPunch.Name)
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