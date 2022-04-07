
#include "Generateur_save.h"

entrees *io_g;
int shmid_g;
int etat_courant = 0;
void Generateur_save::Generateursave_initialiser()
{
	io_g=acces_memoire(&shmid);
	 /* associe la zone de memoire partageeau pointeur */
	if (io_g==NULL)
	 printf("Erreur pas de mem sh\n");

	io_g->gene_pwm = STOP;

	prise.initialiser();
}

void Generateur_save::Generateursave_generer_PWM(pwm etat_pwm)
{
	io_g->gene_pwm = etat_pwm;
}


void Generateur_save::Generateursave_charge()
{


	switch (etat_courant)
	{
		case 0: 	
			voyant.Voyants_set_charge(ROUGE);
			prise.set_trappe(VERT);
			Generateursave_generer_PWM(DC);
			if (io_g->gene_u == 9)
			{
				etat_courant=1;
			}
		break;
		
		case 1:
			prise.set_prise(VERT);
			prise.set_trappe(OFF);
			Generateursave_generer_PWM(AC_1K);
			usleep(100000);
			if (io_g->gene_u == 6 )
			{
				etat_courant=2;
			}

			if (io_g->bouton_stop == 1)
			{
				etat_courant=4;
			}
		break;

		case 2:	
			Generateursave_generer_PWM(AC_CL);
			io_g -> contacteur_AC = 1;
			usleep(100000);
			if (io_g->gene_u == 9)
			{
				etat_courant=3;
			}

			if (io_g->bouton_stop == 1)
			{
				etat_courant=4;
			}
		break;

		case 3:
			Generateursave_generer_PWM(DC);

			if (io_g->gene_u == 12 || io_g->bouton_stop == 1)
			{
				etat_courant=4;
			}
		break;

		case 4:
			Generateursave_generer_PWM(DC);
			voyant.Voyants_set_charge(VERT);
			prise.set_trappe(VERT);
		break;
		
	}


}

