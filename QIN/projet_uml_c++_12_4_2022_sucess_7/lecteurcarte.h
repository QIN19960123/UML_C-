/**
 * \file 		lecteurcarte.h
 *          Programme pour faire marcher une borne de recharge du vehicule
 * 					Ce fichier est le fichier principal qui s'éxecute en boucle
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 		14/02/2022
 * \version 1.0
 */
#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"
#include "base_clients.h"
#include <unistd.h>
#include <stdio.h>

#include "Voyants.h"
#include "timer.h"
#include "Bouton.h"
#include "prise.h"
#include "Generateur_save.h"

/**
 * \namespace std
 * Espace de nom principale de l'application
 */
using namespace std;

/**
 * \class LecteurCarte
 * 				Represente la classe principal
 */
class LecteurCarte
{
  public : 
	//	LecteurCarte();
	//void LecteurCarte_init();

  /**
   * \fn 				initialiser()
   * \brief 		Pour initialiser les ports et toutes les classes
   * \attention Ce sera la premiere fonction qui sera exécuté
   * \warning 	Il faut brancher le lecteur carte avant de lancer le programme \n
   * 						sinon le programme affiche une erreur et on ne pourra pas exécuter la suite du programme
	*/
	void initialiser();

	  /**
   * \fn 				lire_carte()
   * \brief 		Programme principal 
   * \note 			Programme principal qui s'execute en boucle
	*/
	void lire_carte();

	BDD bdd; 
	Voyant voyant;
	Timer timer;
	Bouton bouton;
	Prise prise;
	Generateur_save generateur_save;
};

#endif // LECTEURCARTE_H
