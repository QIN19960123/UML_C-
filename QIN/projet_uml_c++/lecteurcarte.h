#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "base_clients.h"

using namespace std;


class LecteurCarte
{
  public : 
//	LecteurCarte();
	//void LecteurCarte_init();
	void initialiser();
	void lire_carte();
	BDD bdd; 
};

#endif // LECTEURCARTE_H
