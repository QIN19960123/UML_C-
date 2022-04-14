#include "Bouton.h"

entrees *io_b;
int shmid_b;

void Bouton::Bouton_initialiser()
{
io_b=acces_memoire(&shmid_b);
if(io_b==NULL)
cout<<"erreur pas de mem sh \n";
io_b->bouton_charge=0;
}
int Bouton::Bouton_push()
{
return io_b->bouton_charge;
}
