#include<stdio.h>
#include<stdlib.h>
int entradaDados()
{
	int numeroEntrada;
	printf("\n Insira o numero para tabuada:");
	scanf("%d",&numeroEntrada);
	return numeroEntrada;
}
int main(void){
	int  numeroDigitado = entradaDados();
	if(numeroDigitado < 1 || numeroDigitado > 10)
	printf("\n você selecionou a tabuada do numero %d", numeroDigitado);
	printf("\n *_______*");
	for(int controle = 1; controle <= 10; controle++)
	{
		printf("\n %d x %d = %d",controle, numeroDigitado, numeroDigitado * controle);
	}
return 0;	
}
