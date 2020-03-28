#include <iostream>

#include "Pokemon.h"



int main()
{
	long tempInput;
	std::cout << "Typ iets en druk op enter om te beginnen" << std::endl;
	std::cin >> tempInput;

	Pokemon Pikachu("Electric Ring" , 50, "Pika Punch", 20, 1.5, 20, 500, "Pikachu", "Lightning", "Fire", "Fighting");

	Pokemon Charmeleon("Headbutt", 10, "Fire Flare", 30, 2, 15, 600, "Charmeleon", "Fire", "Water", "Lightning");

	std::cout << "Pikachu begint eerst" << std::endl;
	int* data = Pikachu.GiveData();
	int o = *data;
	std::cout << &o[2];

	return 0;

}