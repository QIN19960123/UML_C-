#include "prise.h"


entress *io;
void initialiser()
{
io=accaes_memoire(&shmid);
if(io==NULL)
{
cout<<"erreur pas de mem sh \n";

led_trappe=OFF;
led_trappe<<io; 
}
}
void Prise_set_trappe(led color)
{
led_trappe=color;
led_trappe<<io; 
}
void Prise_set_prise(led color)
{
led_prise=color;
led_prise<<io; 
}
