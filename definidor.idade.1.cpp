#include<stdio.h>
int entradaDados()
{
	int idade;
	printf("\n insira sua idade:");
	scanf("%d", &idade);
	return idade;
}
int main(void)
{
	int jv, id, idade;
	jv = 18;// deninidor de idade
	id = 60;// deninidor de idade
	idade = entradaDados();//chamando função "entradaDados"
	if(idade >= id)
{
	printf("\n voce e idoso");
}
	else 
	{
	if(idade >= 45 && idade <= 59)

	{printf("\n voce e meia idade");
	
	}
	else

	{
		printf("\n voce e jovem");
	}
	}
	return 0;
}
