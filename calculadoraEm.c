#include<stdio.h>
int main(void)
{

int cont;
do{
float a, b;
char c;
printf("\n digite o numero para a operacao. + para somar, - para subtrair, * para multiplicar, / para dividir:  ");
scanf("%f %c %f", &a, &c, &b);

if(c =='+') 
printf("\n reaultado: %.2f", a+b);
if(c =='-')
printf("\n resultado: %.2f", a-b);
if(c == '*')
printf("\n resultado: %.2f", a*b);
if(c == '/')
printf("\n resultdo: %.2f", a/b);
  
 
  printf("\n Fazer mais operacoes?  1-sim/ 2-nao :");
  scanf("%d", &cont);
} 	 
  
  while(cont == 1);
  return 0;
  }
