#ifndef BASE_CLIENTS_H
#define BASE_CLIENTS_H
#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

using namespace std;

class BDD
{
  public : 
	//BDD_clients();
	int num_carte_Clients(int numero_carte_ins);
	int code_Clients(int numero_carte_ins);
	int carte_admin();
};



#endif // BASE_CLIENTS_H
