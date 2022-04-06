#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"

int main()
{
 	
	//initialisations_ports();

	LecteurCarte lecteurcarte;

  	lecteurcarte.initialiser();
//  lecteurcarte.LecteurCarte_init();

    while (1)
    {
        lecteurcarte.lire_carte();

    }

}
