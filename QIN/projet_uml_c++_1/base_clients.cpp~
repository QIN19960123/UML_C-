#include "base_clients.h"


int BDD::num_carte_Clients(int numero_carte_ins){
	int id=0;
	int verif_BDD = 0;  	//variable qui sert à verifier 
				//si la carte est enregistré (0 = pas enregistré, 1 = enregistré)	
	

	//BDD
	int nb_clients=2; 	// variable contenant le nombre de client
	int BDD_num_tab[2]={7,8}; //tableau avec tous les numéros de carte enregistre
				//ATTENTION il faut mettre le nombre de client total (pas un variable)
	


				/*
				EXPLICATION boucle FOR
				On parcour tout le tableau contenant 
				les cartes enregistre pour voir si notre 
				carte est enregistré
				*/

	for (int compte_id=0 ; compte_id < nb_clients ; compte_id++){ 
	
		if(BDD_num_tab[compte_id] == numero_carte_ins){
			verif_BDD = 1;

			id = compte_id+1;
			cout << "ID du client est " << id <<endl;
		}
	}
	
	

	/*
	verif_BDD est soit egale à 0 ou a 1 et id >=1
	return 0 si la carte n'est pas enregistré
	return l'ID si la carte est enregistré
	*/
	return verif_BDD * id;
}

int BDD::code_Clients(int id){
	int verif_code = -1;
	int code_entre;
	int tab_code_entre[4];

//	int teste_BDD_code_tab[2][4]={{1,2,3,4},{0,0,3,4}};
	int BDD_code_tab[2][4]={{1,2,3,4},{0,0,3,4}}; //Code enregistré
	
	for(int nb_test=0;nb_test < 3; nb_test++){		
	cout<< "rentrez votre code: "<<endl;
	
	scanf("%d",&code_entre);
	
	//Pour avoir le code dans un tableau
	tab_code_entre[0] = code_entre/1000;
	tab_code_entre[1] = (code_entre-(tab_code_entre[0]*1000))/100;
	tab_code_entre[2] = (code_entre-(tab_code_entre[0]*1000+tab_code_entre[1] *100))/10;
	tab_code_entre[3] = code_entre-tab_code_entre[0]*1000-tab_code_entre[1] *100 - tab_code_entre[2] * 10;



	for(int i=0; i <= 3; i++){
		if (tab_code_entre[i]== BDD_code_tab[id-1][i]){
			verif_code = 1;
		}
		else{
			verif_code = 0;	
			i=3;		
		} 

	}
	
	if(verif_code==1){
		nb_test = 3; //le code est correct on sort de de la boucle for
		cout << "le code est correct " <<"\n\n\n\n"<<endl;
	} 
	else{
		cout << "le code est incorrect " <<"\n\n\n\n"<<endl;
}

}
	
	return verif_code;
}



