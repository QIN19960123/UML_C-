#include"Bouton.h"


entrees *io;
int shmid;

void Bouton::Bouton_initialiser()
{
	io=acces_memoire(&shmid);
	if(io==NULL)
	{
	cout<<"erreur pas de mem sh"<< "\n"<<endl;
	}
	io->bouton_charge =0;

}

int Bouton::Bouton_push()
{
return io->bouton_charge;
}
