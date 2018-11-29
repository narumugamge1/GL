//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{

int bn=0,i=0,j=0;	
unsigned char joueur[6]={2,45,32,14,5,22};
unsigned char gagnante[6]={0,0,0,0,0,0};
    
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
	


	return 0;

}
