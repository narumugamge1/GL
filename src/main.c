//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{

	char nom[100] ;
	char prenom[100] ;
	char annee [100] ;
	char phrase [100] ;

	
	scanf("%s",nom);
	scanf("%s",prenom);
	scanf("%s",annee);
	
	
	
	sprintf(phrase,"je m'appelle %s,%s,et je suis n�e en%s",nom,prenom,annee);
	
	MessagePopup("Le contenu de ta chaine est",phrase);
	
	return 0;

	
}
