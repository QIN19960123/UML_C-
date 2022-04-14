/**
 * \file 		Voyant.h
 * 					Fichier pour les Voyants
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 		14/02/2022
 * \version 1.0
 */
#ifndef VOYANTS_H
#define VOYANTS_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

/**
 * \namespace std
 * Espace de nom pour les voyants
 */
using namespace std;

/**
 * \class Voyant
 * 				Represente la classe en rapport avec les voyants
 */
class Voyant
{
  public : 
  /**
   * \fn 				Voyants_initialiser()
   * \brief			Pour initialiser les voyants
   * \attention Il faut utiliser cette fonction avant d'utiliser les voyants
   * \see 			Voyants_set_charge(led color) Voyants_set_dispo(led color) Voyants_set_defaut(led color)
	*/
	void Voyants_initialiser();
	/**
   * \fn 				Voyants_set_charge(led color)
   * \brief			Permet de modifier la couleur du voyant charge
   * \note 			Les voyants peuvent clignoté \n 
   * 						Les couleurs ou les clignotements sont des indications pour le client \n
   * \attention	Il faut avoir initialiser les voyants au préalable (Voyants_initialiser())
   * \param			color	VERT	\n
   * 									ROUGE	\n
   * 									NOIR	
   * \see 			Voyants_initialiser()
	*/
	void Voyants_set_charge(led color);

	/**
   * \fn 		Voyants_set_dispo(led color)
   * \brief	Permet de modifier la couleur du voyant diponible
   * \attention	Il faut avoir initialiser les voyants au préalable (Voyants_initialiser())
   * \param	color	VERT	Borne disponible \n
   * 							ROUGE	\n
   * 							NOIR	
   * \see 	Voyants_initialiser()
	*/
	void Voyants_set_dispo(led color);

	/**
   * \fn 		Voyants_set_defaut(led color)
   * \brief	Permet de modifier la couleur du voyant default
   * \attention	Il faut avoir initialiser les voyants au préalable (Voyants_initialiser())
   * \param	color	VERT	\n
   * 							ROUGE	\n
   * 							NOIR	
   * \see Voyants_initialiser()
	*/
	void Voyants_set_defaut(led color);

};


#endif
