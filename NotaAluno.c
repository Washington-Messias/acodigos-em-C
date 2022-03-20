#include <stdio.h>
float entradaDados (int numeroEntrada)
{
  float nota;
  printf("\n entre com a nota %d:" , numeroEntrada);
  scanf("%f", &nota);
  return nota;
}
int main(void)
{
  float n1, n2, n3, n4, media;

  n1 = entradaDados(1);
  n2 = entradaDados (2);
  n3 = entradaDados (3);
  n4 = entradaDados (4);

  media = (n1 + n2 + n3 + n4) / 4;
  if (media >= 7.0)
  {
    printf ("Aluno APROVADO com média %f : ", media);
  } else {
    printf ("Aluno REPROVADO com média %f :", media);
  }
return 0;
}
