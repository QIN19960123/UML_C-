/**
 * \file 	Generateur_save.h
 * 			Fichier pour le générateur
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 	14/02/2022
 * \version 1.0
 */

#ifndef GENERATEUR_SAVE_H
#define GENERATEUR_SAVE_H
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include "lcarte.h"
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "Voyants.h"
#include "timer.h"
#include "Bouton.h"
#include "prise.h"
#include "base_clients.h"

using namespace std;
/**
 * @class 	Generateur_save
 * 			Represente les classes en rapport avec le générateur
 */
class Generateur_save
{
public:
	/**
	 * \fn 		Generateursave_initialiser()
	 * \brief 	Initialise le generateur et le met à l'arrêt
	 * \note 	Met gene_pwo à STOP \n
	 * 			Lance l'initialisation de la prise
	 */
	void Generateursave_initialiser();

	/**
	 * \fn 		Generateursave_generer_PWM(pwm etat_pwm)
	 * \brief 	Permet de changer la valeur du générateur 
	 * \param	etat_pwm	STOP 	pour arrêt le générateur\n
	 * 						DC 		pour un signal continu \n
	 *  					AC_1K 	pour un signal PWM de fréquence 1kHz \n
	 *  					AC_CL 	pour un signal PWM de 1kHz à rapport cyclique variable 
	 */ 
	void Generateursave_generer_PWM(pwm etat_pwm);

	/**
	 * \fn 			Generateursave_charge(int num_carte)
	 * \brief 	 	Permet de charger la voiture
	 * \note 		Machine à état charger la voiture\n
	 * 				On récupére le numéro de la carte pour vérifier que le client qui veut retirer le véhicule est le même qui la mit à charger
	 * \attention	On a mit usleep(100000) pour attendre 0,1sec \n
	 * 				Car la machine a état s'éxécute trop vite pour la simulation \n
	 * 				Et on a pas le temps de chager la valeur du générateur
	 * \param		num_carte	numéro de la carte qu'on à inséré
	 * 
	 */ 
	void Generateursave_charge(int num_carte);

	Voyant voyant;
	Timer timer;
	Bouton bouton;
	Prise prise;
};
#endif
