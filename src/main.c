//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main(void)

{
int nb,point=0;

nb = LancerDe ();

while (!nb==1)
{
	if (nb==2*nb)
	{
		point=point+nb;
	}
	
	else if(nb==3)
	{
		point=point*2;
	}
	
	else if(nb==5)
	{
		if(point>=2)
		{
			point=point-2;
		}
		else
		{
		point=0;
			
		}
	
	}
		
}
    return 0;
}
