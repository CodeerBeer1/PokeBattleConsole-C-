
// Dit is de header bestand waar Pikachu class gemaakt wordt.

#pragma once

#include "Pokemon.h"
#include "Charmeleon.h"
#include "Attack.h"

// Om de lus te voorkomen dat de 2 header files steeds elkaar #include'en, is een kopie van die class hier gemaakt.
class Charmeleon;

// Pikachu class is een pokemon dus inherit het de pokemon class zodat het alles heeft wat een pokemon normaalgesproken heeft.

class Pikachu : public Pokemon
{

	// Alleen de aanvullende properties die een pokemon dus uniek maakt worden hier gecreëerd.
	Attack ElectricRing;
	Attack PikaPunch;

public:
	
	// Constructor die de naam en schade van de attacks vaststelt.
	Pikachu(

		std::string electric_ring_string,
		int electric_ring_damage,
		std::string pika_punch_string,
		int pika_punch_damage
	);

	// Getters die de naam van attacks returnen.
	std::string GiveElectricRing() const;
	std::string GivePikaPunch() const;

	// Met dit function valt het de andere pokemon aan, en refereert de enemy als argument.
	void AttackPokemon(Charmeleon& enemy);

};