
#include "lecteurcarte.h"
int attente = 60;


void LecteurCarte::initialiser(){

	initialisations_ports();
	voyant.Voyants_initialiser();
	timer.timer_initialiser();
	bouton.Bouton_initialiser();
	prise.initialiser();
	generateur_save.Generateursave_initialiser();

}	


/*
LecteurCarte::LecteurCarte{
 initialisations_ports();
}*/


void LecteurCarte::lire_carte()
{
	if(carte_inseree())
		{
	
		int num_carte=lecture_numero_carte();
		cout << "INFORMATION CLIENT " <<"\n"<<endl;
		cout << "le numero de la carte est " << num_carte <<endl;
	
		int info_bdd = bdd.num_carte_Clients(num_carte);


		if(info_bdd >= 1){
			cout << "La carte est enregistré "<<endl;
			int verif_code_bdd = bdd.code_Clients(info_bdd);
			if(verif_code_bdd == 1){

/////////////////Connection à la borne ///////////////////////

				for(int i=0 ; i<8 ; i++)
					{	
					voyant.Voyants_set_charge(VERT);
					usleep(500000);	
					voyant.Voyants_set_charge(OFF);
					usleep(500000);	
					}
				cout<<"Retirer votre carte\n"<<endl;

				attente_retrait_carte();

				cout<<"Carte retire"<<endl;
				cout<<"Vous avez 1min pour cliquer sur le bouton CHARGE\n"<<endl;

				timer.time_raz();
				while(timer.time_valeur()<=attente)
				{
					
					if(bouton.Bouton_push()==1){

					cout<<"branchez la prise a voutez vehicule "<<endl;
					while(1){
					generateur_save.Generateursave_charge();
					//cout<<"1 "<<endl;
						}
					//verfication_bouton=1;
}
					
					
					
					
					//cout<<"timer.time_valeur()"<<endl;
				}
			}
			else {
				cout<<"Vous fait trop de tentative \n Votre compte vas être bloqué\n\n\n\n\n\n"<<endl;

			}
		} 
		else if(info_bdd == 0){	
			cout << "La carte n'est PAS enregistré "<<"\n\n\n\n"<<endl;
		}
		else{
			cout << "ERROR verification base de donné "<< info_bdd <<"\n\n\n\n"<<endl;
		}

	}

}


