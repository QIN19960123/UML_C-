#include "prise.h"


entrees *io;
int shmid;

void Prise::initialiser()
{
io=acces_memoire(&shmid);
if(io==NULL)
cout<<"erreur pas de mem sh \n";
led_trappe=OFF;
led_trappe<<io; 
}
void Prise::set_trappe(led color)
{
led_trappe=color;
led_trappe<<io; 
}
void Prise:: set_prise(led color)
{
led_prise=color;
led_prise<<io; 
}
