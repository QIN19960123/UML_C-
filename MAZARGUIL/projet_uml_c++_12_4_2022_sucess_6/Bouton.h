#ifndef BOUTON_H
#define BOUTON_H
#include "lcarte.h"
#include "donnees_borne.h"
#include "memoire_borne.h"
#include <iostream>

using namespace std;
class Bouton
{
	public:
	/**
	 * @param numero_carte_ins pour avoir le numéro de la carte inséré
	 *  @returns 0 si la carte n'est pas enregistré 
	 * \n ou un entier positif qui correspond à l'ID (identifiant) du client
	 * @note verif_BDD est soit egale à 0 ou a 1 et id >=1 
	 */
		void Bouton_initialiser();
		int Bouton_push();
};
#endif
