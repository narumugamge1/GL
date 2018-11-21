//  Copyright (c) 2018 Antoine Tran Tan
#include "my_header.h"
#include <stdlib.h>

#define SEUILH 200
#define SEUILB -100

//question 1
int quest1(){
	int i;// défnir variable i
	unsigned char bin[10]={0,1,2,55,33,5,6,7,8,9};//tableau du bin
	
	for(i=0; i<10;i++)
    { //boucle for pour pouvoir répeter plus facilement
		if(bin[i]>45)
        { // si bin[i] est superieru
			bin[i]=1; //valeur binaire vaut 1
		}
		else{ //Sinon
			bin[i]=0;// la valeur binaire vaut 0
		}
	}
	
    return 0;/// retour des valeurs
}

//question 2
int quest2(){
	int sat[10]={43,326,116,13,550,9,50,39,350,1}, i2;// tableau 
	
	for(i2=0; i2<10;i2++)
    {//boucle
		if(sat[i2]>SEUILH)
        {
            // Si l'entier initialisés est plus grand que SEUILH
			sat[i2]=SEUILH;// l'entier vaut 200
		}
		else if(sat[i2]<SEUILB)// Sinon si l'entier est inférieur à seuil B
        {
			sat[i2]=SEUILB;// l'entier vaut -100
		}
	}
	
	return 0;
}

//question 3
int quest3(){
	int dist[10]={58,213,216,10,150,6,3,2,500,4}, i3, nmax, nmin;// tableau distance
	
	for(i3=1; i3<10;i3++)// Boucle
    {
		if(dist[i3]>dist[i3-1])// Si dist[i3]>dist[i3-1] alors le nombre maximum  est inchangé ,le nombre minimum est égale a les distances du tableau -1
        {
			nmax=dist[i3];
			nmin=dist[i3-1];
		}
		else{
			nmin=dist[i3];// Sinon l'inverse
			nmax=dist[i3-1];
		}
		
		dist[i3]=nmax-nmin;//différence
	}
	
	return 0;
}

//question 4
int quest4(){
	int a[5]={1,5,9,8,11}, b[5]={0,1,2,3,4}, i4;// tableau a et b

	for(i4=0; i4<5; i4++)//Boucle
    {
		b[i4]=a[4-i4];//b contient 11,8,9,5,1
	}
 return 0;
}

//question 5
int quest5(){
	int miroir[10]={1,2,3,4,5}, i5;//tableau avec constante pair

	for(i5=0;i5<5;i5++)//Boucle
    {
		miroir[i5+5]=miroir[4-i5];//recopie la premiere moitier du tableau dans la deuxieme
	}
 return 0;
}

int main(void){
	quest1();
	quest2();
	quest3();
	quest4();
	quest5();

	return 0;
}
