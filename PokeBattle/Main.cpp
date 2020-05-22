/*

	Opdracht: OOP PokeBattle
	Naam: Khizer Butt
	Klas: 18A3
	Studenten-nummer: 99053182
	inleverdatum: 21/4/2020

*/

#include <iostream>

#include "Pikachu.h"
#include "Charmeleon.h"

// start function begint de PokeBattle zelf.

void start()
{

	bool Flag = false;

	Pikachu Pikachu("electricring", 80, "pikapunch", 60);

	Charmeleon Charmeleon("headbutt", 60, "fireflare", 50);


	// While loop blijft de spel lopen totdat 'Flag' true wordt.
	while (!Flag)
	{

		// Als een van de Pokemon uitgeschakeld is, word 'Flag' true.
		// Tot die tijd blijven de Pokemons elkaar aanvallen.
		if (Pikachu.Status)
		{
			std::cout << "Pikachu's Turn:\n" << Pikachu.GetHP() << " HP\n" << Pikachu.GiveElectricRing() << "\n" << Pikachu.GivePikaPunch() << std::endl;
			Pikachu.AttackPokemon(Charmeleon);
			if (!Charmeleon.Status)
			{
				Flag = true;
			}
		}

		if (Charmeleon.Status)
		{
			std::cout << "Charmeleon's Turn:\n" << Charmeleon.GetHP() << " HP\n" << Charmeleon.GiveHeadButt() << "\n" << Charmeleon.GiveFireFlare() << std::endl;
			Charmeleon.AttackPokemon(Pikachu);
			if (!Pikachu.Status)
			{
				Flag = true;
			}
		}
	}
}

// Bij Main function begint de applicatie.

int main()
{
	std::cout << "Dit is de PokeBattle\nEr zijn 2 Pokemons, Charmeleon en Pikachu; en ze gaan met elkaar vechten\n<============================================================================3\nTyp je attacks precies in zoals ze bij de statistieken zijn weergegeven\n" << std::endl;

	start();

	return 0;

}