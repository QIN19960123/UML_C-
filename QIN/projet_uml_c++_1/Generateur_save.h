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
using namespace std;

class Generateur_save
{
public:
	void Generateursave_initialiser();
	void Generateursave_charge();
	void Generateursave_generer_PWM(pwm etat_pwm);
	Voyant voyant;
	Timer timer;
	Bouton bouton;
	Prise prise;
};
#endif
