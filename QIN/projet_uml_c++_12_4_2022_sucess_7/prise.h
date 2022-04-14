/**
 * \file 		prise.h
 * 					Fichier pour l'état des prises
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 		14/02/2022
 * \version 1.0
 */

#ifndef PRISE_H 
#define PRISE_H
#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

/**
 * \namespace std
 * Espace de nom pour la prise
 */
using namespace std;

/**
 * \class Prise
 * 				Represente la classe pour la prise et la trappe
 */
class Prise
{
  public : 

  /**
   * \fn 				initialiser()
   * \brief 		Pour initialiser la trappe
   * \attention La fonction doit être exécuter avant d'utiliser la trappe (set_trappe(led color))	
	*/
	void initialiser();

	/**
	 * \fn 			set_trappe(led color)
	 * \brief 	La fonction permet de voir et modifier l'état de la trappe	
	 * \note 		On a un voyant pour voir l'état de la prise
	 * \param 	color VERT 	pour déverrouiller\n
	 * 								OFF 	pour verrouiller
	 */
	void set_trappe(led color);

	/**
	 * \fn 			set_prise(led color)
	 * \brief 	La fonction permet de voir et modifier l'état à la prise
	 * \note 		On a un voyant pour voir l'état de la prise
	 * \param 	color VERT 	pour déverrouiller\n
	 * 								OFF 	pour verrouiller
	 */
	void set_prise(led color);
};


#endif
