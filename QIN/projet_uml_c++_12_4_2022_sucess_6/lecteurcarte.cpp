
#include "lecteurcarte.h"
int attente = 60;

int stop_moitier = 1;
int verfication_bouton=0;

//Fonction pour initialiser les ports et les classes
void LecteurCarte::initialiser(){

	initialisations_ports(); 		//initialisation des ports
	voyant.Voyants_initialiser();	//initialisation des Voyant
	timer.timer_initialiser();		//initialisation des timers
	bouton.Bouton_initialiser();	//initialisation des Boutons
	prise.initialiser();			//initialisation des Prises
	generateur_save.Generateursave_initialiser();	//initialisation du generateur

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
		if (num_carte == 32){
			cout<<"carte administrateur"<<endl;
			if (bdd.code_Clients(32)){
				bdd.carte_admin();
			}
		}
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
 							
						cout<<"Branchez la prise a votre vehicule "<<endl;
						while(1){
							generateur_save.Generateursave_charge(num_carte);
						}

					verfication_bouton=1;
					}
					else if(timer.time_valeur() == attente/2 && stop_moitier == 1){
						cout<<"Il vous reste 30sec pour appuyer sur le bouton CHARGE\n"<<endl;
						stop_moitier=0;
					}			
					
					
					//cout<<"timer.time_valeur()"<<endl;
				}
					cout<<"time fin\n"<<endl;
			}
			else {
				cout<<"Vous fait trop de tentative \n Votre compte vas être bloqué\n\n\n\n\n\n"<<endl;

			}
		} 
		else if(info_bdd == 0 && carte_inseree()){	
			cout << "La carte n'est PAS enregistré "<<"\n\n\n\n"<<endl;
			while(1){
if(carte_inseree()==0){
break;}
			}
		}
		else{
			cout << "ERROR verification base de donné "<< info_bdd <<"\n\n\n\n"<<endl;
		}

	}

}


