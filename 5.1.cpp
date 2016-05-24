/*5.1. Defina	um	vetor	contendo	5	valores	inteiros	quaisquer.*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
main(){
	float vetor[4];
	int x;
	
	for(x=0;x<=4;x++)
	{
		
	printf("Informe um valor:\n");
	scanf("%f",&vetor[x]);
		
	}
	for(x=0;x<=4;x++){
		
		printf("%.1f \n",vetor[x]);
		
	}
}
