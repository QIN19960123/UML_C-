#ifndef TIMER_H
#define TIMER_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

using namespace std;

class Timer
{
  public : 
	void timer_initialiser();
	void time_raz();
	int time_valeur();
};

#endif
