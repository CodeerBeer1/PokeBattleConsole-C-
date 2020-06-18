
// Dit is de header bestand waar Pikachu class gemaakt wordt.

#pragma once

#include "Pokemon.h"
#include "Charmeleon.h"
#include "Attack.h"

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
	Attack GiveElectricRing() const;
	Attack GivePikaPunch() const;

};