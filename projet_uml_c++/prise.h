#ifndef PRISE_H 
#define PRISE_H
#include "lcarte.h"
#include "memoire_borne.h"
#include "donnees_borne.h"
#include <iostream>

using namespace std;

class Prise
{
  public : 
	void initialiser();
	void set_trappe(led color);
	void set_prise(led color);
};


#endif
