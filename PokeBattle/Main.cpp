#include <iostream>

#include "Pokemon.h"



int main()
{
	long tempInput;
	std::cout << "Typ iets en druk op enter om te beginnen" << std::endl;
	std::cin >> tempInput;

	bool Flag = false;

	Pokemon Pikachu("Electricring" , 50, "Pikapunch", 20, 1.5, 20, 500, "Pikachu", "Lightning", "Fire", "Fighting");

	Pokemon Charmeleon("Headbutt", 10, "Fireflare", 30, 2, 15, 500, "Charmeleon", "Fire", "Water", "Lightning");

	while (!Flag)
	{
		std::cout << "Pikachu's Turn:\n" << Pikachu.HealthPoints << " HP\n" << Pikachu.GiveAttack1() << "\n" << Pikachu.GiveAttack2() << std::endl;
		Flag = Pikachu.AttackPokemon(Charmeleon, Flag);
		std::cout << "Charmeleon's Turn:\n" << Charmeleon.HealthPoints << " HP\n" << Charmeleon.GiveAttack1() << "\n" << Charmeleon.GiveAttack2() << std::endl;
		Flag = Charmeleon.AttackPokemon(Pikachu, Flag);
	}

	return 0;

}