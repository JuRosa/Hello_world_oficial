/*8.3.	 Escreva	 uma	 função	 que	 recebe	 por	 parâmetro	 o	 IMC,	 e	 mostre	 na	 tela	 a	
situação	do	indivíduo,	conforme	tabela	abaixo:
Resultado Situação
Abaixo de 17 Muito abaixo do peso
Entre 17 e 18,49 Abaixo do peso
Entre 18,5 e 24,99 Peso normal
Entre 25 e 29,99 Acima do peso
Acima de 29,99 Obesidade I*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
void classificacao(float);
int main(){

classificacao(29.99);

}
void classificacao(float imc){
	if (imc<17){
		printf("Muito Abaixo do peso!");
	}else
		if(imc>=17 && imc<=18.49){
        printf("Abaixo do peso!");
	}else
		if(imc>=18.5 && imc<=24.99){
	    printf("Peso normal!");
	}else
		if(imc>=25 && imc<=29.99){
		printf("Acima do peso!");
	}else
		if(imc>29.99){
		printf("Obesidade I!");
		}
		
	
}
