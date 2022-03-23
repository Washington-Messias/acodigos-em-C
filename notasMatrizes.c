#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int nota [10] = {};
	int i;
	
	for(i=0;i<=10;i++){
		printf("\n Insira a nota dos alunos %d: ", i);
	scanf("\n %d", &nota[i]);
		
	}for(i=0;i<=10;i++){
			if(nota[i]>=7)
			printf("\n aluno aprovado: %d\n", i);
			else{
				printf("\n aluno reprovado: %d\n",i);
			}
			
		}
		for(i=0; i<=10; i++){
			printf("\nAluno %d.. Nota: %d \n",i,nota[i]);
		}
		
	}
	
	


	

