
#include "lecteurcarte.h"

void LecteurCarte::LecteurCarte_init(){
bouton.Bouton_initialiser();
}
/*
LecteurCarte::LecteurCarte{
 initialisations_ports();
}
*/

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
/*
				for(int i=0 ; i<8 ; i++)
					{	
						voyant.Voyants_set_charge(VERT);
						usleep(500000);	
						voyant.Voyants_set_charge(OFF);
						usleep(500000);	
					}


*/

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


