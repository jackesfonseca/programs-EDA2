#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 262139

/*
	sondagem L' C' P
	dominacao P
*/

struct mat
{
	int pontuacao;
	int row;
	int column;
	char tipo;
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
Matriz *consulta_FilaPrio(FilaPrio *fp);
Pilha *cria_pilha();
void libera_pilha(Pilha *pilha);
int insere_pilha(Pilha *pilha, struct mat item);
int remove_pilha(Pilha *pilha);

int main(void)
{
	int row, row_l, column, column_l, p_i, t_loop; /* start game data */
	int i, j, k, l, c, areas_dominadas[100][100];
	Matriz **matriz;
	Matriz *consulta;
	Pilha *pilha;
	FilaPrio *fp;
	int TABLE_SIZE = 1000, EDAzinhos = 1, cont_turnos = 0;
	char command[256];

	matriz = hash_init(TABLE_SIZE);
	fp = cria_FilaPrio();
	pilha = cria_pilha();

	/* valores iniciais */
	scanf("%d %d %d %d", &row, &column, &p_i, &t_loop); /* lê dados iniciais*/
	matriz[row][column].row = row;
	matriz[row][column].column = column;
	matriz[row][column].pontuacao = p_i;
	matriz[row][column].tipo = 'D';

	/* DOMINOU */
	/* armazena informação de área livre nas células adjacentes e insere na pilha */
	row_l = row;			 /* row armazena antiga linha dominada */
	column_l = column; /* column aramzena antiga coluna dominada */

	for (l = (row_l - 1); l <= (row_l + 1); l++)
	{
		for (c = (column_l - 1); c <= (column_l + 1); c++)
		{
			if (matriz[l][c].tipo != 'D' && matriz[l][c].tipo != 'S')
			{
				matriz[l][c].row = l;
				matriz[l][c].column = c;
				matriz[l][c].tipo = 'L';
				insere_pilha(pilha, matriz[l][c]);
			}
		}
	}

	/* verifica células livres para sondagem (Adjacentes à áreas dominadas) */
	row_l = (*pilha)->dados.row;
	column_l = (*pilha)->dados.column;
	remove_pilha(pilha);

	printf("sondar %d %d\n", row_l, column_l);

	printf("fimturno\n");
	fflush(stdout);

	/* turno 0 */
	scanf("%s %d %d %d", command, &row, &column, &p_i); /* sondar */
	matriz[row][column].row = row;
	matriz[row][column].column = column;
	matriz[row][column].pontuacao = p_i;
	matriz[row][column].tipo = 'S';
	remove_pilha(pilha);

	insere_FilaPrio(fp, matriz[row][column], matriz[row][column].pontuacao); /* armazena a próxima posição a ser dominada */

	/* consulta e remove posição para dominação (área sondada previamente)*/
	consulta = consulta_FilaPrio(fp);
	printf("dominar %d %d\n", consulta->row, consulta->column);
	//remove_FilaPrio(fp); /* remove área dominada */

	/* verifica células livres para sondagem (Adjacentes à áreas dominadas) */
	row_l = (*pilha)->dados.row;
	column_l = (*pilha)->dados.column;
	remove_pilha(pilha);

	printf("sondar %d %d\n", row_l, column_l);

	printf("fimturno\n");
	fflush(stdout);

	while ((t_loop - 1) > cont_turnos)
	{
		/* turno 1 em diante */
		if (row == 8 && column == 6)
		{
			//printf("tipo:%c\n", (*pilha)->dados.tipo);
		}
		for (j = 0; j < EDAzinhos + 1; j++)
		{
			scanf("%s", command); /* dominar */

			if (strcmp(command, "dominacao") == 0)
			{
				scanf("%d", &p_i);
				/* consulta e remove posição para dominação (área sondada previamente)*/
				consulta = consulta_FilaPrio(fp);

				/* marca área livre */
				/* inserir valores livres */

				row_l = consulta->row;			 /* row armazena antiga linha dominada */
				column_l = consulta->column; /* column aramzena antiga coluna dominada */
				remove_FilaPrio(fp);				 /* remove área dominada */

				//if(cont_turnos>1){
				//printf("linha antes:%d coluna antes:%d\n", row_l, column_l);
				//}

				for (l = (row_l - 1); l <= (row_l + 1); l++)
				{
					for (c = (column_l - 1); c <= (column_l + 1); c++)
					{
						if (l == 6 && c == 5)
						{
							//printf("tipo dominacao:%c\n", matriz[l][c].tipo);
						}
						if (matriz[l][c].tipo != 'D' && matriz[l][c].tipo != 'S')
						{
							matriz[l][c].row = l;
							matriz[l][c].column = c;
							matriz[l][c].tipo = 'L';
							if (cont_turnos > 1)
							{
								//printf("tipo:%c \n", matriz[l][c].tipo);
								//printf("linha:%d coluna:%d\n", l, c);
							}
							insere_pilha(pilha, matriz[l][c]);
						}
					}
				}
			}

			else if (strcmp(command, "sondagem") == 0)
			{
				scanf("%d %d %d", &row, &column, &p_i);
				matriz[row][column].row = row;
				matriz[row][column].column = column;
				matriz[row][column].pontuacao = p_i;
				(*pilha)->dados.tipo = 'S';
				matriz[row][column].tipo = 'S';

				//remove_pilha(pilha);
				if (row == 8 && column == 6)
				{
					//printf("tipo: %c\n", matriz[row][column].tipo);
				}
				insere_FilaPrio(fp, matriz[row][column], matriz[row][column].pontuacao);
			}

			else
				exit(0);
		}

		/* consulta e remove posição para dominação (área sondada previamente)*/
		consulta = consulta_FilaPrio(fp);
		//printf("%d ultimo q pegou:%d %d\n", consulta->row, consulta->column);
		printf("dominar %d %d\n", consulta->row, consulta->column);

		for (i = 0; i < EDAzinhos + 1; i++)
		{
			if (i > 4)
			{
				break;
			}
			else
			{
				/* verifica células livres para sondagem (Adjacentes à áreas dominadas) */
				if ((*pilha) != NULL)
				{
					row_l = (*pilha)->dados.row;
					column_l = (*pilha)->dados.column;
					//printf("elemento removido:%d %d\n", (*pilha)->dados.row, (*pilha)->dados.column);
					if (matriz[row_l][column_l].tipo == 'S')
					{
						/*remove_pilha(pilha);
					row_l = (*pilha)->dados.row;
					column_l = (*pilha)->dados.column;*/
						break;
					}
					(*pilha)->dados.tipo = 'S';
					matriz[row_l][column_l].tipo = 'S';
					if (row_l == 6 && column_l == 5)
					{
						//	printf("tipo sondar:%c\n", (*pilha)->dados.tipo);
					}
					remove_pilha(pilha);

					printf("sondar %d %d\n", row_l, column_l);
				}
				else
				{
					break;
				}
			}
		}

		EDAzinhos++;
		cont_turnos++;

		printf("fimturno\n");
		fflush(stdout);
	}

	liberaHash(matriz, TABLE_SIZE);
	libera_FilaPrio(fp);
	libera_pilha(pilha);

	return 0;
}

/* Hash Table */
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

Matriz *consulta_FilaPrio(FilaPrio *fp)
{
	if (fp == NULL)
		return NULL;

	if (estaVazia_FilaPrio(fp))
		return NULL;

	return &(fp->dados[0]);
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