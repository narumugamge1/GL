//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{

int bn=0,i=0,j=0,score=0,tour=0,meilleurbn;	
unsigned char joueur[6]={35,45,23,15,3,27};
unsigned char gagnante[6]={0,0,0,0,0,0};
    

	for(tour=0;tour<100;tour++)
	{	
		initialiserTirage(); 
		for(i=0;i<6;i++)					   
		{
			gagnante[i]=tirerNumero();
		}
	


	 
		for(i=0;i<6;i++)					   
		{
			for(j=0;j<6;j++)
			{

				if(joueur[i]==gagnante[j])
				{
					bn=bn+1;
				}
			}
		}
	
		if(meilleurbn<bn)
		{
			meilleurbn=bn;
	}

	return 0;

}

}
