#ifndef VOYANTS_H
#define VOYANTS_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"


using namespace std;

class Voyant
{
  public : 
	void Voyants_initialiser();
	void Voyants_set_charge(led color);
	void Voyants_set_dispo(led color);
	void Voyants_set_defaut(led color);

};


#endif
