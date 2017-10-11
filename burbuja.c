#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


int main() {
	int vect[30],i,j,k,aux,num,l;
	for(i=1;i<=30;i++){
	 printf("Ingresa el dato %d\n",i);
	 scanf("%d",&num);
	}
	for(j=1;j<=30;j++){
		for(k=1;k<=30;k++){
			if(vect[j]<vect[k]){
			aux=vect[j];
			vect[j]=vect[j];
			vect[j]=aux;
			}
		}
	}
	for(l=1;l<=30;l++){
		printf("[%d]",vect[l]);
	}
	return 0;
}
