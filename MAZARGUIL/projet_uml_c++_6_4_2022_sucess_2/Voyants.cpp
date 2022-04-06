#include "Voyants.h"

entrees *io;
int shmid;
void Voyant::Voyants_initialiser()
{
	io=acces_memoire(&shmid);
	 /* associe la zone de memoire partagee au pointeur */
	if (io==NULL)
	cout << "Erreur pas de mem sh " <<endl;
	io->led_dispo=VERT;
	io->led_charge=OFF;
}

void Voyant::Voyants_set_charge(led color)
{
	io->led_charge=color;
}

void Voyant::Voyants_set_dispo(led color)
{
	io->led_dispo=color;
}

void Voyant::Voyants_set_defaut(led color)
{
	io->led_defaut=color;
}
