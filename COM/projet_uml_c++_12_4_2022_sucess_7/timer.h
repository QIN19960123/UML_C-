/**
 * \file 		timer.h
 * 					Fichier pour les timer
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 		14/02/2022
 * \version 1.0
 */

#ifndef TIMER_H
#define TIMER_H

#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

/**
 * \namespace std
 * Espace de nom pour le timer
 */
using namespace std;

/**
 * \class Timer
 * 				Represente la classe en rapport avec aux timer
 */
class Timer
{
  public : 
  /**
   *\fn 				timer_initialiser()
   *\brief			pour initialiser les timer
   *\attention Il faut utiliser cette fonction avant d'utiliser les timer
   *\see    time_raz()  time_valeur()
	*/
	void timer_initialiser();
    /**
    * \fn                 time_raz
    * \brief            Remis les timer à zéro
    * \note           commence le timer
    * \attention    Il faut avoir initialiser les voyants au préalable (timer_initialiser())
    * \see             timer_initialiser()
     
     */
	void time_raz();
    
    /**
    *\fn                 time_valeur
    * \brief            return la valeur de timer
    * \note             il veut rentre la valeur de timer
    * \attention    Il faut avoir initialiser les voyants au préalable (timer_initialiser())
    * \see             Voyants_initialiser()
     
     */
	int time_valeur();
};

#endif
