#include <iostream>

#include "Game.h"

Game::Game()
{

	using namespace std;

	cout << "Pikachu" << endl;
	cout << "Charmeleon" << endl;
	cout << "Balbasaur" << endl;
	cout << "Squirtle" << endl;
	cout << "Graveler\n" << endl;

	Player1Choose();
	Player2Choose();

}

std::string Game::Player1Choose()
{
	std::string Pokemon;

	std::cout << "Speler 1 kies een Pokemon" << std::endl;
	std::cin >> Pokemon;
	return Pokemon;
}

std::string Game::Player2Choose()
{
	std::string Pokemon;

	std::cout << "Speler 2 kies een Pokemon" << std::endl;
	std::cin >> Pokemon;
	return Pokemon;
}