#include <stdio.h>
float entradaDados(int numeroDados)
  {
    float resultado;
    printf ("\n entre com o valor # %d:", numeroDados);
    scanf ("%f", &resultado);
    return resultado;
    
  }
int main(void)
{
  float valordoproduto, pagamento, resultado;
  
  valordoproduto = entradaDados(1);
  pagamento = entradaDados(2);
 
resultado = (pagamento - valordoproduto);
  {
  printf ("valor do troco %f\n", resultado);
    
  }
  return resultado;