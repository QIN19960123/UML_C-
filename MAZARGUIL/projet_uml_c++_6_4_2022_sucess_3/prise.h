#ifndef PRISE_H //VERIFER SI ERREUR
#define PRISE_H
#include "lcarte.h"
#include "memoire_borne.h"
#include "donnees_borne.h"

class prise
{
  public : 
	void initialiser();
	void set_trappe(led color);
	void set_prise(led color);
};


#endif
