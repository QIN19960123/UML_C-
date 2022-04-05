
#include "lecteurcarte.h"

/*void LecteurCarte::LecteurCarte_init(){

}
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
		//int verif_code_bdd = bdd.code_Clients(info_bdd);
	} 
	else if(info_bdd == 0){	
		cout << "La carte n'est PAS enregistré "<<"\n\n\n\n"<<endl;
	}
	else{
	cout << "ERROR verification base de donné "<< info_bdd <<"\n\n\n\n"<<endl;
	}


	}

}


