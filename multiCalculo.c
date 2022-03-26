#include<stdio.h>
#include<stdlib.h>

float dadosEscolha()
{
	int escolha;
	printf("\n Escolha uma opcao: ");
	scanf("%d", &escolha);
	return escolha;
}

int main(void)
{

	
	int cont;
	int escolha;
	
	
	
	printf("\n Escolha a opcao de operacao desejada: ");
	printf("\n 1 - Velocidade media");
	printf("\n 2 - Hipotenusa");
	printf("\n 3 - Area equivalente ao quadrado");
	printf("\n 4 - Area do circulo");
	escolha = dadosEscolha();
	switch(escolha){
	case 1:
	do{
	float tempo;
	float distancia;
	float velocidade_media;
	
	printf("\n digite os valores a seguir para saber a velocidade media.");
	printf("\n *_____________________________*\n");
	printf("\n distancia em KM: ");
	scanf("%f", &distancia);
	printf("\n tempo em Horas: ");
	scanf("%f", &tempo);
	
	velocidade_media = distancia / tempo;
	printf("\n *__________________*\n");
	printf("\n velocidade media : %.1f", velocidade_media);
	
	printf("\n realizar mais operacoes? (1-SIM / 2-NAO ): ");
	scanf("%d", &cont);
	}
	while(cont== 1);
	return 0;
	break;
		
		case 2:
		do{
			float a,b, y;
			printf("\n Descubra o valor da Hipotenusa");
			printf("\n *_____________________*\n");
			printf("\n Digite o valor do Cateto a: ");
			scanf("%f", &a);
			printf("\n Digite o valor do ceteto b: ");
			scanf("%f", &b);
			
			a = a*a;
			b = b*b;
			 y = (a + b)/2;
			 printf("\n Valor da Hipotenusa = %.1f", y);
			
			
			printf("\n realizar mais operacoes? (1-SIM / 2-NAO ): ");
			scanf("%d", &cont);
		}
		while(cont== 1);
		return 0;
		break;
			
			case 3:
			do{
			
			float b, h, a;
			printf("\n Descubra a area do quadrado");
			printf("\n *___________________*\n");
			printf("\n Digite o valor da base: ");
			scanf("%f", &b);
			printf("\n Digite o valor da altura: ");
			scanf("%f", &h);
			
			a = b*h;
			printf("\n area total do quadrado = %.1f", a);
			
				
			printf("\n realizar mais operacoes? (1-SIM / 2-NAO ): ");
			scanf("%d", &cont);
			}
			while(cont== 1);
			return 0;
			break;
				
				case 4:
					do{
					
					float pi, r, a;
					printf("\n Descubra a area do circulo");
					printf("\n *______________________*\n");
					printf("\n Digite o tamanho do raio: ");
					scanf("%f", &r);
					
					pi = 3.14;
					r = r*2;
					a = pi * r;
					printf("\n a area total do circulo = %.1f",a );
					
						
			printf("\n realizar mais operacoes? (1-SIM / 2-NAO ): ");
			scanf("%d", &cont);
		}
		while(cont== 1);
		return 0;
		break;
	
	}
	

}






