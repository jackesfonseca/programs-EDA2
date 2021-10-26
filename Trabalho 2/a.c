#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 262139
//Tabela hash//
#define hash(V, M) (V % M)
#define hashtwo(V, M) (V % 97 + 1)
#define key(x) (x.chave)
#define key2(x) (x.chave2)
#define less(a, b) (key(a) < key(b))
#define null(A) (key(ht[A]) == key(NULLItem))
static int N;
int M = 7000;

/*
	sondagem L' C' P
	dominacao P
*/

struct mat
{
  long long int pontuacao;
  long long int row;
  long long int column;
  long long int chave;
  long long int tipo;
};

struct fila_prioridade
{
  int qtd;
  struct mat dados[MAX];
};

struct elemento
{
  struct mat dados;
  struct elemento *prox;
};

typedef struct elemento *Pilha;
typedef struct elemento Elem;
typedef struct fila_prioridade FilaPrio;
typedef struct mat Matriz;

//definicao null item fila
FilaPrio NULLItem2 = {
    0, 0, 0, 0, 0};

//definicao null item para tabela hash
Matriz NULLItem = {
    0, 0, 0, 0, 0};
//definicao do vetor da tabela hash
static Matriz *ht;

//tabela hash funcoes
void HTInit(int max);
int HTCount();
void expand(int chave);
Matriz HTsearch(int chave);
int HTMudaChave(int chave);
void HTinsert(Matriz item, int chave);
//
Matriz **hash_init(int TABLE_SIZE);
void liberaHash(Matriz **hash_table, int TABLE_SIZE);
FilaPrio *cria_FilaPrio();
void libera_FilaPrio(FilaPrio *fp);
int estaCheia_FilaPrio(FilaPrio *fp);
int estaVazia_FilaPrio(FilaPrio *fp);
int insere_FilaPrio(FilaPrio *fp, Matriz matriz, int prio);
void promoverElemento(FilaPrio *fp, int filho);
int remove_FilaPrio(FilaPrio *fp);
void rebaixarElemento(FilaPrio *fp, int pai);
Matriz consulta_FilaPrio(FilaPrio *fp);
Pilha *cria_pilha();
void libera_pilha(Pilha *pilha);
int insere_pilha(Pilha *pilha, struct mat item);
int remove_pilha(Pilha *pilha);

int main(void)
{
  long long int Linhainicial, Colunainicial, Pontosinicial, Turnos;
  long long int row_l, column_l, pont_atual, indice, contador = 0, status = 0;
  char command[10];
  long long int l, c;
  long long int chave;
  float pi = 3.14159265;
  Matriz Item;
  Matriz Item2;
  Matriz consultar;
  Matriz *Dominados;
  Dominados = (Matriz *)malloc(sizeof(Matriz) * 7000);
  //Pilha *pilha;
  FilaPrio *filaPrio;
  int TABLE_SIZE = 7000, EDAzinhos = 1, cont_turnos = 0;
  HTInit(7000);
  filaPrio = cria_FilaPrio();
  //pilha = cria_pilha();
  /* valores iniciais */
  scanf("%lld %lld %lld %lld", &Linhainicial, &Colunainicial, &Pontosinicial, &Turnos);
  //ADD HASH DOMINACAO INICIAL
  Item.row = Linhainicial;
  Item.column = Colunainicial;
  Item.pontuacao = Pontosinicial;
  Item.tipo = 'D';
  Item2.row = Linhainicial;
  Item2.column = Colunainicial;
  Item2.pontuacao = Pontosinicial;
  Item2.tipo = 'D';
  Dominados[0] = Item2;
  //printf("Linha dominados 0:%d coluna dominados:%d\n", Dominados[0]->row, Dominados[0]->column);
  chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
  //printf("%ld",chave);
  Item.chave = chave;
  HTinsert(Item, chave);
  /*Procurar itens q possam ser sondados na rodada inicial*/
  row_l = Linhainicial;     /* row armazena antiga linha dominada */
  column_l = Colunainicial; /* column aramzena antiga coluna dominada */

  for (l = (row_l + 1); l >= (row_l - 1); l--)
  {
    for (c = (column_l + 1); c >= (column_l - 1); c--)
    {
      chave = abs((l * pi) + (c * pi) * pi + (l));
      Item = HTsearch(chave);
      if (Item.tipo != 'D' && Item.tipo != 'S')
      {
        //printf("Linha:%d Coluna:%d\n", l, c);
        Item.row = l;
        Item.column = c;
        Item.tipo = 'L';
        chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
        Item.chave = chave;
        HTinsert(Item, chave);
        //printf("linha:%d Coluna:%d Tipo:%c\n", (*pilha)->dados.row, (*pilha)->dados.column, (*pilha)->dados.tipo);
      }
    }
  }
  /*Alguns testes
  chave = (5 * pi) + (6 * pi) * pi + (5);
  Item = HTsearch(chave);
  printf("linha:%d Coluna:%d Tipo:%c\n", Item.row, Item.column, Item.tipo);
  printf("linha:%d Coluna:%d Tipo:%c\n", (*pilha)->dados.row, (*pilha)->dados.column, (*pilha)->dados.tipo)
  ;
    /*Item = HTsearch(chave);
  //printf("linha:%d Coluna:%d Tipo:%c\n", Item.row, Item.column, Item.tipo);
  */

  /*sonda uma das areas descobertas*/
  row_l = Linhainicial + 1;
  column_l = Colunainicial + 1;

  printf("sondar %lld %lld\n", row_l, column_l);
  //Marca essa celula como sondada na hash
  chave = abs((row_l * pi) + (column_l * pi) * pi + (row_l));
  indice = HTMudaChave(chave);
  ht[indice].tipo = 'S';
  printf("fimturno\n");
  fflush(stdout);
  //pede a sondagem do arbitro
  //scanf(" %*s %*ld %*ld %*ld");
  for (long t = 1; t < Turnos; t++)
  {
    if (t == 1)
    {
      contador = 0;
      printf("dominar %lld %lld\n", row_l, column_l);
      Item2.row = row_l;
      Item2.column = column_l;
      Item2.tipo = 'D';
      Dominados[t] = Item2;
      //printf("Linha Dominado t=1:%d\n", Dominados[t-1].row);
      //printf("rodada 1\n");
      row_l = Dominados[t - 1].row;
      column_l = Dominados[t - 1].column;
      //printf("linha:%d coluna:%d\n", row_l, row_l);
      for (l = (row_l + 1); l >= (row_l - 1); l--)
      {
        for (c = (column_l + 1); c >= (column_l - 1); c--)
        {
          chave = abs((l * pi) + (c * pi) * pi + (l));
          Item = HTsearch(chave);
          if (Item.tipo != 'D' && Item.tipo != 'S')
          {
            //printf("t:%d contador:%d\n", t, contador);
            if (contador != t && status == 0)
            {
              //printf("Linha:%d Coluna%d\n", l, c);
              //printf("passou aq\n");
              printf("sondar %lld %lld\n", l, c);
              Item.row = l;
              Item.column = c;
              Item.tipo = 'S';
              chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
              Item.chave = chave;
              HTinsert(Item, chave);
              contador++;
            }
            else if (contador == t)
            {
              status = 1;
            }
            //printf("Linha:%d Coluna:%d\n", l, c);
            Item.row = l;
            Item.column = c;
            Item.tipo = 'L';
            chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
            Item.chave = chave;
            HTinsert(Item, chave);
            //printf("linha:%d Coluna:%d Tipo:%c\n", (*pilha)->dados.row, (*pilha)->dados.column, (*pilha)->dados.tipo);
          }
        }
      }
      status = 0;
      printf("fimturno\n");
      fflush(stdout);
      //scanf(" %*s %*ld");
      for (int i = 0; i < contador; i++)
      {
        scanf(" %s %lld %lld %lld", command, &row_l, &column_l, &pont_atual);
        chave = abs((row_l * pi) + (column_l * pi) * pi + (row_l));
        indice = HTMudaChave(chave);
        ht[indice].pontuacao = pont_atual;
        Item = HTsearch(chave);
        insere_FilaPrio(filaPrio, Item, Item.pontuacao);
        //printf("pontuacao:%d\n", Item.pontuacao);
      }
    } //se turno >1
    else
    {
      contador = 0;
      consultar = consulta_FilaPrio(filaPrio);
      //printf("resultado da consulta:%d\n", consultar->pontuacao);
      printf("dominar %lld %lld\n", consultar.row, consultar.column);
      remove_FilaPrio(filaPrio);
      chave = abs((row_l * pi) + (column_l * pi) * pi + (row_l));
      indice = HTMudaChave(chave);
      ht[indice].tipo = 'D';
      chave = abs((consultar.row * pi) + (consultar.column * pi) * pi + (consultar.row));
      Item = HTsearch(chave);
      //printf("tipo:%c\n",Item.tipo);
      Dominados[t] = consultar;
      row_l = Dominados[t - 1].row;
      column_l = Dominados[t - 1].column;
      //printf("%d %d\n",row_l,column_l);
      //printf("turno %d :\n", t-1);
      //printf("Dominados>1 Linha:%d Coluna:%d\n", Dominados[t-1].row, Dominados[t-1].column);
      for (l = (row_l + 1); l >= (row_l - 1); l--)
      {
        for (c = (column_l + 1); c >= (column_l - 1); c--)
        {
          chave = abs((l * pi) + (c * pi) * pi + (l));
          Item = HTsearch(chave);
          if (Item.tipo != 'D' && Item.tipo != 'S')
          {
            //printf("t:%d contador:%d\n", t, contador);
            if (contador != t && status == 0)
            {
              //printf("passou aq\n");
              printf("sondar %lld %lld\n", l, c);
              Item.row = l;
              Item.column = c;
              Item.tipo = 'S';
              chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
              Item.chave = chave;
              HTinsert(Item, chave);
              contador++;
            }
            else if (contador == t)
            {
              status = 1;
            }
            //printf("Linha:%d Coluna:%d\n", l, c);
            Item.row = l;
            Item.column = c;
            Item.tipo = 'L';
            chave = abs((Item.row * pi) + (Item.column * pi) * pi + (Item.row));
            Item.chave = chave;
            HTinsert(Item, chave);
            //printf("linha:%d Coluna:%d Tipo:%c\n", (*pilha)->dados.row, (*pilha)->dados.column, (*pilha)->dados.tipo);
          }
        }
      }
      status = 0;
      printf("fimturno\n");
      fflush(stdout);
      scanf(" %s %lld", command, &pont_atual);
      remove_FilaPrio(filaPrio);
      for (int i = 0; i < contador; i++)
      {
        //printf("estou no for\n");
        //printf("Dominados>1 Linha:%d Coluna:%d\n", Dominados[2].row, Dominados[2].column);
        scanf(" %s %lld %lld %lld", command, &row_l, &column_l, &pont_atual);
        chave = abs((row_l * pi) + (column_l * pi) * pi + (row_l));
        indice = HTMudaChave(chave);
        ht[indice].pontuacao = pont_atual;
        ht[indice].row = row_l;
        ht[indice].column = column_l;
        Item = HTsearch(chave);
        insere_FilaPrio(filaPrio, Item, Item.pontuacao);
        //printf("resultado da consulta:%d\n", Item.pontuacao);
        //printf("pontuacao:%d\n", Item.pontuacao);
      }
    }
    /*Testes
    consultar = consulta_FilaPrio(filaPrio);
    printf("consultar:%ld\n", consultar->pontuacao);
    */
  }
  libera_FilaPrio(filaPrio);

  return 0;
}
//* Hash Table */
Matriz **hash_init(int TABLE_SIZE)
{
  Matriz **matriz;
  int i;

  matriz = (Matriz **)malloc(sizeof(Matriz *) * TABLE_SIZE);

  for (i = 0; i < TABLE_SIZE; i++)
    matriz[i] = (Matriz *)malloc(sizeof(Matriz) * TABLE_SIZE);

  return matriz;
}

void liberaHash(Matriz **matriz, int TABLE_SIZE)
{
  int i;

  for (i = 0; i < TABLE_SIZE; i++)
    free(matriz[i]);

  free(matriz);
}

/* Priority Queue */
FilaPrio *cria_FilaPrio()
{
  FilaPrio *fp;

  fp = (FilaPrio *)malloc(sizeof(struct fila_prioridade));
  if (fp != NULL)
    fp->qtd = 0;
  return fp;
}

void libera_FilaPrio(FilaPrio *fp)
{
  free(fp);
}

int estaCheia_FilaPrio(FilaPrio *fp)
{
  if (fp == NULL)
    return -1;
  return (fp->qtd == MAX);
}

int estaVazia_FilaPrio(FilaPrio *fp)
{
  if (fp == NULL)
    return -1;
  return (fp->qtd == 0);
}

int insere_FilaPrio(FilaPrio *fp, Matriz matriz, int prio)
{
  if (fp == NULL)
    return 0;

  if (estaCheia_FilaPrio(fp))
    return 0;

  fp->dados[fp->qtd] = matriz;
  promoverElemento(fp, fp->qtd);
  fp->qtd++;
  return 1;
}

void promoverElemento(FilaPrio *fp, int filho)
{
  int pai;
  struct mat temp;
  pai = (filho - 1) / 2;

  while (filho > 0 && fp->dados[pai].pontuacao <= fp->dados[filho].pontuacao)
  {
    temp = fp->dados[filho];
    fp->dados[filho] = fp->dados[pai];
    fp->dados[pai] = temp;

    filho = pai;
    pai = (filho - 1) / 2;
  }
}

int remove_FilaPrio(FilaPrio *fp)
{
  if (fp == NULL)
    return 0;

  if (estaVazia_FilaPrio(fp))
    return 0;

  fp->qtd--;
  fp->dados[0] = fp->dados[fp->qtd];
  rebaixarElemento(fp, 0);
  return 1;
}

void rebaixarElemento(FilaPrio *fp, int pai)
{
  struct mat temp;
  int filho = 2 * pai + 1;

  while (filho < fp->qtd)
  {
    /* Pai tem dois filhos? Quem é o maio? */
    if (filho < fp->qtd - 1)
    {
      if (fp->dados[filho].pontuacao < fp->dados[filho + 1].pontuacao)
        filho++;
    }

    /* Pai >= filho? terminar processo */
    if (fp->dados[pai].pontuacao >= fp->dados[filho].pontuacao)
      break;

    /* Trocar pai e filho de lugar e calcular novo filho*/
    temp = fp->dados[filho];
    fp->dados[filho] = fp->dados[pai];
    fp->dados[pai] = temp;

    pai = filho;
    filho = 2 * pai + 1;
  }
}

Matriz consulta_FilaPrio(FilaPrio *fp)
{
  if (fp == NULL)
    return NULLItem;

  if (estaVazia_FilaPrio(fp))
    return NULLItem;

  return (fp->dados[0]);
}

/* stack */
Pilha *cria_pilha()
{
  Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
  if (pilha != NULL)
    *pilha = NULL;

  return pilha;
}

void libera_pilha(Pilha *pilha)
{
  if (pilha != NULL)
  {
    Elem *no;
    while ((*pilha) != NULL)
    {
      no = *pilha;
      *pilha = (*pilha)->prox;
      free(no);
    }
    free(pilha);
  }
}

int insere_pilha(Pilha *pilha, struct mat item)
{
  if (pilha == NULL)
    return 0;

  Elem *no = (Elem *)malloc(sizeof(Elem));
  if (no == NULL)
    return 0;

  no->dados = item;
  no->prox = (*pilha);
  *pilha = no;
  return 1;
}

int remove_pilha(Pilha *pilha)
{
  if (pilha == NULL)
    return 0;

  if ((*pilha) == NULL)
    return 0;

  Elem *no = *pilha;
  *pilha = no->prox;
  free(no);

  return -1;
}

//double hash funcoes
void HTInit(int max)
{
  int i;
  N = 0, M = 2 * max;
  ht = malloc(sizeof(Matriz) * M);
  for (int i = 0; i < M; i++)
  {
    ht[i] = NULLItem;
  }
}

int HTCount()
{
  return N;
}

void expand(int chave);

void HTinsert(Matriz item, int chave)
{
  int V = chave;
  int i = hash(V, M);
  int k = hashtwo(V, M);
  while (!null(i))
    i = (i + k) % M;
  ht[i] = item;
  N++;
  if (N >= M / 2)
    expand(chave);
}

Matriz HTsearch(int chave)
{
  int V = chave;
  int i = hash(V, M);
  int k = hashtwo(V, M);
  while (!null(i))
    if (V == key(ht[i]))

      return ht[i];
    else
      i = (i + k) % M;
  return NULLItem;
}

int HTMudaChave(int chave)
{
  int V = chave;
  int i = hash(V, M);
  int k = hashtwo(V, M);
  while (!null(i))
    if (V == key(ht[i]))
    {
      ht[i].tipo = 'D';
      return i;
    }
    else
      i = (i + k) % M;
  printf("retornou 0\n");
  return 0;
}

void expand(int chave)
{
  int i;
  Matriz *t = ht;
  ht = malloc(sizeof(Matriz) * M * 2);
  M = M * 2;
  for (i = 0; i < M / 2; i++)
    if (key(t[i]) != key(NULLItem))
      HTinsert(t[i], chave);
  free(t);
}