#include<stdio.h>
int entradaDados()
{
	int moeda;
	printf("\n selecione a moeda:");
	scanf("%i", &moeda);
	return moeda;

}
int main(void)


{
	int cont;
	int moeda;	
	float USD, EUR, JAP, CHI,CAN;
	do{
	
	printf("\n 1-USD \n");
	printf("\n 2-EUR \n");
	printf("\n 3-JAP \n");
	printf("\n 4-CHI \n");
	printf("\n 5-CAN \n");
	moeda = entradaDados();
	
	
	USD = 5.02;
	EUR = 6.08;
	JAP = 3.03;
	CHI = 2.99;
	CAN = 5.01;
	
	
	
	switch(moeda)
	{case 1:
		printf("\n Valor: %.2f", USD);
		
		break;
		
		case 2:
			printf("\n Valor: %.2f", EUR);
			
			break;
			
			case 3:
				printf("\n valor: %.2f", JAP);
				
				break;
				
				case 4:
					printf("\n valor: %.2f", CHI);
					
					break;
					
					case 5:
						printf("\n valor: %.2f", CAN);
						
						break;
	}
	printf("\n que continuar? 1-sim/ 2-nao : ");
	scanf("%i",&cont);
	
}
			while(cont == 1);
			return 0;
}
