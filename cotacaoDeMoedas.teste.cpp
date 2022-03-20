#include<stdio.h>
char entradaDados()
{
	char moeda;
	printf("\n selecione a moeda:");
	scanf("%c", &moeda);
	return moeda;

}
int main(void)
{
	char moeda;
	float USD, EUR, JAP, CHI,CAN;
	USD = 5.02;
	EUR = 6.08;
	JAP = 3.03;
	CHI = 2.99;
	CAN = 5.01;
	moeda = entradaDados();
	char * moeda = &USD;
	char * moeda = &EUR;
	char * moeda = &JAP;
	char * moeda = &CHI;
	char * moeda = &CAN;
	if(USD){
		printf("\n cotacao atual: %.2f", USD);
	}else {
	
		if(EUR){
		
			printf("\n cotacao atual: %.2f", EUR);
		}
		else 
		if(JAP){
		
			printf("\n cotacao atual: %.2f", JAP);
		}
		else
		
		
		 if(CHI)
			{
			
			printf("\n cotacao atual: %.2f", CHI);
		}
					else 
					
					
					if(CAN){
					
						
						printf("\n cotacao atual: %.2f", CAN);
				}

			
		
	
		
}
return 0;
}
