#include <iostream>

#include "Pokemon.h"

void start()
{
	bool Flag = false;

	Pokemon Pikachu("electricring", 150, "pikapunch", 120, 1.5, 20, 500, "Pikachu", "Lightning", "Fire", "Fighting");

	Pokemon Charmeleon("headbutt", 110, "fireflare", 130, 2, 15, 500, "Charmeleon", "Fire", "Water", "Lightning");

	while (!Flag)
	{
		std::cout << "Pikachu's Turn:\n" << Pikachu.HealthPoints << " HP\n" << Pikachu.GiveAttack1() << "\n" << Pikachu.GiveAttack2() << std::endl;
		Flag = Pikachu.AttackPokemon(Charmeleon, Flag);
		std::cout << "Charmeleon's Turn:\n" << Charmeleon.HealthPoints << " HP\n" << Charmeleon.GiveAttack1() << "\n" << Charmeleon.GiveAttack2() << std::endl;
		Flag = Charmeleon.AttackPokemon(Pikachu, Flag);
	}
}

int main()
{
	long tempInput;
	std::cout << "Dit is de PokeBattle\nEr zijn 2 Pokemons, Charmeleon en Pikachu; en ze gaan met elkaar vechten\nTyp je attacks precies zoals ze in de statistieken zijn\n" << std::endl;

	start();

	return 0;

}