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
   * \fn 				timer_initialiser()
   * \brief			
   * \attention 
	*/
	void timer_initialiser();
	void time_raz();
	int time_valeur();
};

#endif
