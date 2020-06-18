
// Dit is de source file van Pikachu.h.

#include "Pikachu.h"

// Pikachu properties worden door de constructor hieronder initialiseerd.

Pikachu::Pikachu(

	std::string electric_ring_string, 
	int electric_ring_damage, 
	std::string pika_punch_string, 
	int pika_punch_damage

)
	:

	// Omdat Pikachu inherit van Pokemon class, is pokemon automatisch de eerste member van Pikachu en worden zijn properties werkelijk hier gedefinieerd.
	Pokemon(2, 1, 500, "Pikachu", "Lightning", "Fire", "Fighting"),
	ElectricRing{electric_ring_string, electric_ring_damage},
	PikaPunch{pika_punch_string, pika_punch_damage}
{
}

// Hieronder staan de declaraties van de Getters.

Attack Pikachu::GiveElectricRing() const
{
	return ElectricRing;
}

Attack Pikachu::GivePikaPunch() const
{
	return PikaPunch;
}
