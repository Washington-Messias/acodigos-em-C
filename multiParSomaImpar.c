#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int mult;
	int soma;
	int inteiros[10]={};
	int i;
	for(i=0;i<=10;i++){
		printf("\n escreva  numeros inteiros para sabermos se e par ou impar %d:",i);
		scanf("%d", &inteiros[i]);
		}
		for(i=0;i<=10;i++){
			if(inteiros[i] %2 != 0)
			{
			
			printf("\n numeros impares: %d", inteiros[i]+ 5);
					}
			else{
				
				printf("\n numeros pares: %d", inteiros[i]* 10);
			}
		}
	}

