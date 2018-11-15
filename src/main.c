//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main(void)

{
int nb,point=0;

nb = LancerDe ();//nb c'est le lancer de dés

while (!nb==1)//il n'obtient pas de 1
{
	if (nb==2*nb)// si nb est pariun nombre pair
	{
		point=point+nb;//il augmentye ses points du chiffre obtenue
	}
	
	else if(nb==3)//si le nombre vaut 3
	{
		point=point*2;//les points sont multipliés par 2
	}
	
	else if(nb==5)// et si le nombre vaut 5
	{
		if(point>=2) //si les point sont au dessus de 0
		{
			point=point-2;// il perd deux points
		}
		else
		{
		point=0//fin du tour
			
		}
	
	}
}		
	return 0;//retour d'une valeur
}

