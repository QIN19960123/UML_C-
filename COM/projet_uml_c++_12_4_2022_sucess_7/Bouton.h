/**
 * \file         Bouton.h
 *                     Fichier pour les boutons
 * \author     MAZARGUIL Marlon
 * \author     QIN Xiaotong
 * \date         14/02/2022
 * \version 1.0
 */
#ifndef BOUTON_H
#define BOUTON_H
#include "lcarte.h"
#include "donnees_borne.h"
#include "memoire_borne.h"
#include <iostream>

using namespace std;
/**
 * @class Bouton
 * Represente les classes pour les boutons 
 */
class Bouton
{
	public:
	/**
	 * \brief 	Pour initialiser les boutons
	 * \note 	Met à 0 l'état du bouton
	 */
		void Bouton_initialiser();
	/**
	 * \brief 		La fonction permet vérifier si le bouton charge a été appuyé
	 * \returns 	1 si on appuis sur le bouton charge\n
	 * 				et 0 sinon
	 * \attention 	Si on clic sur le bouton la valeur reste à 1 (elle ne revient pas à 0 si on relache le bouton) 
	 */
		int Bouton_push();
};
#endif
