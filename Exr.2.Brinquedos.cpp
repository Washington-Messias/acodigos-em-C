#include<stdio.h>

float dadosProduto()
{
	float qtdProdutos;
	printf("\n Quantos brinquedos deseja comprar:");
	scanf("%f", &qtdProdutos);
	return qtdProdutos;
}
int dadosVendedor()
{
	int vendedor;
	printf("\n indentificador do vendedor:");
	scanf("%d",&vendedor);
	return vendedor;
}
int main(void)
{
	float C_d, vrd, vrr, prcProduto, qtdProduto;
	int idVendedor, cdgProduto;
	
	qtdProduto = dadosProduto();//camando a funçaõ "dadosProduto"
	idVendedor = dadosVendedor();//chamando a função "dadosVendedor"
	cdgProduto = 258736;
	prcProduto = 2.50;  //preço em dolar
	C_d = 5.00; //cotação dolar
	
	
	
	printf("\n cotacao do dolar: %.2f", C_d);
	printf("\n preco do produto em dolar: %.2f", prcProduto);
	printf("\n codigo do produto: %d", cdgProduto);
	printf("\n indentificador do vendedor: %d", idVendedor);
	
	 vrd = qtdProduto  * prcProduto;
	if(vrd >= 1){
		printf("\n valor recebido em dolar: %.2f", vrd);
	}
	vrr = vrd * 5;
	if (vrr >= 1){
		printf("\n valor recebido em reais: %.2f", vrr);
	}
	
	
	
return (vrd), (vrr);
}


