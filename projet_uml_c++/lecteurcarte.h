#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "base_clients.h"
#include <unistd.h>
#include <stdio.h>

#include "Voyants.h"

using namespace std;


class LecteurCarte
{
  public : 
//	LecteurCarte();
	//void LecteurCarte_init();
	void initialiser();
	void lire_carte();
	BDD bdd; 
	Voyant voyant;
};

#endif // LECTEURCARTE_H
