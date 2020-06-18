
// Dit is de source file van Charmeleon.h.

#include "Charmeleon.h"

// Charmeleon properties worden door de constructor hieronder initialiseerd.

Charmeleon::Charmeleon(

	std::string head_butt_string, 
	int head_butt_damage, std::string 
	fire_flare_string, 
	int fire_flare_damage

)
	:

	// Omdat Charmeleon inherit van Pokemon class, is pokemon automatisch de eerste member van Charmeleon en worden zijn properties werkelijk hier gedefinieerd.
	Pokemon(2, 1, 500, "Charmeleon", "Fire", "Water", "Lightning"),
	HeadButt{ head_butt_string, head_butt_damage },
	FireFlare{ fire_flare_string, fire_flare_damage }
{
}

// Hieronder staan de declaraties van de Getters.

Attack Charmeleon::GiveHeadButt() const
{
	return HeadButt;
}

Attack Charmeleon::GiveFireFlare() const
{
	return FireFlare;
}