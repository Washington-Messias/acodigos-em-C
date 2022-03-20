#include<stdio.h>
int main(void)
{
	int  t, d;
	float v;
	printf("\n Insira a distancia:");
	scanf("%d", &d);
	printf("\n Insira o tempo:");
	scanf("%d", &t);
	printf("\n *_______________________*");
	
	v = d / t;
	printf("\n Velocidade média = %.2f", v);
	return 0;
}
