#include <stdio.h>
#include <stdlib.h>

void iniciador_tabela_hash(int *tabela_hash, int tamanho)
{
  int i;

  for (i = 0; i < tamanho; i++)
  {
    tabela_hash[i] = 0;
    tabela_hash[i] = 0;
  }
}

int main()
{
  int tamanho = 1000001;
  int TH[tamanho];
  int entradas = 1, number = 0;
  int maior_cont = 0, maior_cor = 0;
  iniciador_tabela_hash(TH, tamanho);
  scanf("%d", &entradas);
  while (entradas != 0)
  {
    for (int i = 0; i < entradas; i++)
    {
      scanf("%d", &number);
      TH[number]++;
      if (TH[number] > maior_cont)
      {
        maior_cont++;
        maior_cor = number;
      }
    }
    printf("%d\n", maior_cor);
    maior_cont = 0;
    maior_cor = 0;
    iniciador_tabela_hash(TH, entradas);
    scanf("%d", &entradas);
  }
  return 0;
}
