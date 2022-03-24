#include<stdio.h>
#include<stdbool.h>
int vetor[4]={2584, 1579, 2589, 1475};

int limite = 4;

bool buscaBinaria (int * vetor, int limite, int chave)
{
	int low, high, mid;
	low = 0; high = limite - 1;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(chave < vetor[mid]) high = mid -1;
		else if(chave > vetor[mid]) low = mid +1;
		else return true;
	}
	return false;
}
int main(void)
{
	
	
	
	int codigo;
	printf("\n informe o codigo do produto:");
	scanf("%d",&codigo);
	if (buscaBinaria){
		printf("\n produto encontrado");
	}
	else{
		printf("\n produto nao encotrado");
		
	}
	return 0;
}
