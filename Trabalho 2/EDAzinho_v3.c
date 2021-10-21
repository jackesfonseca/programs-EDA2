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

typedef struct fila_prioridade FilaPrio;
typedef struct mat Matriz;

Matriz *hash_init(int TABLE_SIZE);
void liberaHash(Matriz *hash_table, int TABLE_SIZE);
FilaPrio* cria_FilaPrio();
void libera_FilaPrio(FilaPrio *fp);
int estaCheia_FilaPrio(FilaPrio *fp);
int estaVazia_FilaPrio(FilaPrio *fp);
int insere_FilaPrio(FilaPrio *fp, Matriz matriz, int prio);
void promoverElemento(FilaPrio *fp, int filho);
Matriz *remove_FilaPrio(FilaPrio *fp);
void rebaixarElemento(FilaPrio *fp, int pai);
int consulta_FilaPrio(FilaPrio *fp);
 
int main(void)
{
	int row, column, p_i, t_loop; /* start game data */
	int i, j, k, l, c;
	Matriz *matriz;
	Matriz *consulta;
	FilaPrio *fp;
	int TABLE_SIZE = 1000000, EDAzinhos = 1, cont_dominadas = 0, cont_turnos=0;
	char command[256];

	matriz = hash_init(TABLE_SIZE);
	fp = cria_FilaPrio();

	/* valores iniciais */
	scanf("%d %d %d %d", &row, &column, &p_i, &t_loop); /* lê dados iniciais*/
	matriz[p_i].row = row;
	matriz[p_i].column = column;
	matriz[p_i].pontuacao = p_i;
	matriz[p_i].tipo = 'S';

	insere_FilaPrio(fp, matriz[p_i], matriz[p_i].pontuacao);

	row++;
	column++;
	printf("sondar %d %d\n", row, column);

	printf("fimturno\n");
	fflush(stdout);

	/* turno 0 */
	scanf("%s %d %d %d", command, &row, &column, &p_i);	/* sondar */
	matriz[p_i].row = row;
	matriz[p_i].column = column;
	matriz[p_i].pontuacao = p_i;
	matriz[p_i].tipo = 'S';

	insere_FilaPrio(fp, matriz[p_i], matriz[p_i].pontuacao);

	printf("dominar %d %d\n", row, column);
	row++;
	column++;
	printf("sondar %d %d\n", row, column);

	printf("fimturno\n");
	fflush(stdout);

	while((t_loop-1) > cont_turnos)
	{
		/* turno 1 em diante */
		for(j=0; j<EDAzinhos+1; j++)
		{
			scanf("%s", command);	/* dominar */

			if(strcmp(command, "dominacao") == 0)
			{
				scanf("%d", &p_i);
				matriz[p_i].tipo = 'D';
			}

			else if(strcmp(command, "sondagem") == 0)
			{
				scanf("%d %d %d", &row, &column, &p_i);
				matriz[p_i].row = row;
				matriz[p_i].column = column;
				matriz[p_i].pontuacao = p_i;
				matriz[p_i].tipo = 'S';

				for(l=0; l<3; l++)
				{
					for(c=0; c<3; c++)
					{
						
					}
				}
			}

			else
				break;
		}

		printf("dominar %d %d\n", row, column);

		for(i=0; i<EDAzinhos+1; i++)
		{
			row++;
			column++;
			printf("sondar %d %d\n", row, column);
		}

		EDAzinhos++;
		//t_loop--;
		//areas_dominadas++;
		cont_turnos++;

		printf("fimturno\n");
		fflush(stdout);
	}

	liberaHash(matriz, TABLE_SIZE);

	return 0;
}

/* Hash Table */
Matriz *hash_init(int TABLE_SIZE)
{
	Matriz *matriz;
	int i; 

	matriz = (Matriz *)malloc(sizeof(Matriz) * TABLE_SIZE);

	return matriz;
}

void liberaHash(Matriz *matriz, int TABLE_SIZE)
{
	int i;

	free(matriz);
}

/* Priority Queue */
FilaPrio* cria_FilaPrio()
{
	FilaPrio *fp;

	fp = (FilaPrio*)malloc(sizeof(struct fila_prioridade));
	if(fp != NULL)
		fp->qtd = 0;
	return fp;
}

void libera_FilaPrio(FilaPrio *fp)
{
	free(fp);
}

int estaCheia_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return -1;
	return (fp->qtd == MAX);
}

int estaVazia_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return -1;
	return (fp->qtd == 0);
}

int insere_FilaPrio(FilaPrio *fp, Matriz matriz, int prio)
{
	if(fp == NULL)
		return 0;

	if(estaCheia_FilaPrio(fp))
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
	pai = (filho-1)/2;
	
	while(filho>0 && fp->dados[pai].pontuacao <= fp->dados[filho].pontuacao)
	{
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai];
		fp->dados[pai] = temp;

		filho = pai;
		pai = (filho-1) / 2;
	}
}

Matriz *remove_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return NULL;

	if(estaVazia_FilaPrio(fp))
		return NULL;

	Matriz *temp;
	*temp = fp->dados[fp->qtd];
	fp->qtd--;
	fp->dados[0] = fp->dados[fp->qtd];
	rebaixarElemento(fp, 0);
	return temp;
}

void rebaixarElemento(FilaPrio *fp, int pai)
{
	struct mat temp;
	int filho = 2*pai+1;

	while(filho < fp->qtd)
	{
		/* Pai tem dois filhos? Quem é o maio? */
		if(filho < fp->qtd-1)
		{
			if(fp->dados[filho].pontuacao < fp->dados[filho+1].pontuacao)
				filho++;
		}

		/* Pai >= filho? terminar processo */
		if(fp->dados[pai].pontuacao >= fp->dados[filho].pontuacao)
			break;

		/* Trocar pai e filho de lugar e calcular novo filho*/
		temp = fp->dados[filho];
		fp->dados[filho] = fp->dados[pai];
		fp->dados[pai] = temp;

		pai = filho;
		filho = 2*pai+1;
	}
}

int consulta_FilaPrio(FilaPrio *fp)
{
	if(fp == NULL)
		return 0;

	if(estaVazia_FilaPrio(fp))
		return 0;

	return fp->dados[fp->qtd-1].pontuacao;
}