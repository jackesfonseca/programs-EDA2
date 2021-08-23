#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula
{
  char palavra[27];
  struct celula *prox;
} celula;

celula *enfileira(celula *f, char x[27])
{
  celula *novo = malloc(sizeof(celula));
  novo->prox = f->prox;
  f->prox = novo;
  strcpy(f->palavra, x);
  return novo;
}

celula *criar_lista()
{
  celula *le = malloc(sizeof(celula));
  le->prox = le;
  return le;
}

void imprime_lista(celula *le)
{
  for (celula *elem = le->prox; elem != le; elem = elem->prox)
  {
    printf("%s\n", elem->palavra);
  }
}

int main()
{
  celula *le;
  char palavra[27];
  char vet[500000][27];
  char status;
  int i = 0;
  int c = 0;
  int j = 0;
  le = criar_lista();
  char ultimaletra;
  int tamanho;

  while (scanf("%s", palavra) != EOF)
  {
    strcpy(vet[c], palavra);
    c++;
  }
  for (j; i < j + c; i++)
  {
    if (i > 0)
    {
      //printf("i=%d\n",i);
      tamanho = strlen(vet[i]);
      //printf("ultimaletra=%c\n",vet[i][tamanho-1]);
      if (ultimaletra - 32 == vet[i][0])
      {
        //printf("deu ruim:%s\n",vet[i]);
        strcpy(vet[c + j], vet[i]);
        le = enfileira(le, vet[i + 1]);
        tamanho = strlen(vet[i + 1]);
        ultimaletra = vet[i + 1][tamanho - 1];
        //printf("ultimaletraencontrada:%c\n",ultimaletra);
        i++;
        j++;
      }
      else
      {
        le = enfileira(le, vet[i]);
        ultimaletra = vet[i][tamanho - 1];
        //printf("ultimaletraencontrada2:%c\n",ultimaletra);
      }
    }
    else
    { //i==0
      tamanho = strlen(vet[i]);
      ultimaletra = vet[i][tamanho - 1];
      le = enfileira(le, vet[i]);
    }
  }
  /*for(int k;k<j+c;k++){
      printf("%s\n",vet[k]);
  }*/
  imprime_lista(le);
  free(le);
  return 0;
}
