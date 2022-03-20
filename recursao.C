#include<stdio.h>
double fatorial(int entrada)
{
	double vfatorial;
	printf("\n sequencia chamada recursiva = %d",entrada);
	if(entrada <= 1)
	return (1);
	else {
		vfatorial = entrada * fatorial (entrada - 1);
		printf("\n valores retornados = %.2f",vfatorial);
		return (vfatorial);
		
		
	}
}
int main(void)
{
	int numero;
	double f;
	printf("digite o numero que deseja calcular o fatorial:");
	scanf("%d", &numero);
	printf("\n calculo fatorial");
	printf("\n *________*");
	f = fatorial(numero);
	printf("\n fatorial de %d = %.1f", numero);
	return 0;
}
