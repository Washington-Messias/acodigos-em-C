#include<stdio.h>

int main(void) 
{

int codigo_peca, valor_peca, quantidade, resultado;
printf("insera o codigo:");
scanf("%d", &codigo_peca);
printf("\n valor:");
scanf("%d", &valor_peca);
printf("\n quantidade:");
scanf("%d", &quantidade);
resultado = valor_peca * quantidade;
{printf("\n total:%.1d", resultado);
printf("\n codigo da peca:%d", codigo_peca);
}
return resultado;
}
