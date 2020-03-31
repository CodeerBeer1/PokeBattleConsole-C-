#include <iostream>

#include "Pokemon.h"

void start()
{

	bool Flag = false;

	Pokemon Pikachu("electricring", 150, "pikapunch", 110, 1.5, 20, 500, "Pikachu", "Lightning", "Fire", "Fighting");

	Pokemon Charmeleon("headbutt", 110, "fireflare", 130, 2, 15, 500, "Charmeleon", "Fire", "Water", "Lightning");

	while (!Flag)
	{
		if (Pikachu.Status)
		{
			std::cout << "Pikachu's Turn:\n" << Pikachu.HealthPoints << " HP\n" << Pikachu.GiveAttack1() << "\n" << Pikachu.GiveAttack2() << std::endl;
			Pikachu.AttackPokemon(Charmeleon);
			if (!Charmeleon.Status)
			{
				Flag = true;
			}
		}

		if (Charmeleon.Status)
		{
			std::cout << "Charmeleon's Turn:\n" << Charmeleon.HealthPoints << " HP\n" << Charmeleon.GiveAttack1() << "\n" << Charmeleon.GiveAttack2() << std::endl;
			Charmeleon.AttackPokemon(Pikachu);
			if (!Pikachu.Status)
			{
				Flag = true;
			}
		}
	}
}

int main()
{
	std::cout << "Dit is de PokeBattle\nEr zijn 2 Pokemons, Charmeleon en Pikachu; en ze gaan met elkaar vechten\nTyp je attacks precies in zoals ze bij de statistieken zijn weergegeven\n" << std::endl;

	start();

	return 0;

}