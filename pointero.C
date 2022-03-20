#include<stdio.h>
int main(void)
{
	int soma = 20 + 30;
	int * somaParcial = &soma;
	printf("\n teste de utilizacao");
	printf("\n *_______*");
	printf("\n valor da variavel 'soma'= %i", soma);
	printf("\n valor da variavel *somaParcial = %i", *somaParcial);
	return 0;
}
