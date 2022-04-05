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
void set_trappe(led color)
{
led_trappe=color;
led_trappe<<io; 
}
void set_prise(led color)
{
led_trappe=color;
led_trappe<<io; 
}
