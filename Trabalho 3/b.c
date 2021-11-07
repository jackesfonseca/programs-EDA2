#include <stdio.h>
#include <stdlib.h>

struct grafo
{
    int eh_ponderado;
    int qtd_vertices;
    int grau_max;
    int **arestas;
    float **pesos;
    int *grau;
};

typedef struct grafo Grafo;

Grafo *cria_grafo(int qtd_vertices, int grau_max);
void libera_grafo(Grafo *grafo);
int insere_aresta(Grafo *grafo, int src, int dest, int eh_digrafo, float peso);
int remove_aresta(Grafo *grafo, int orig, int dest, int eh_eh_digrafo);
int dfs_aux(Grafo *grafo, int ini, int *visitado);
int dfs(Grafo *grafo, int ini, int *visitado, int flag, int cont_grupo, int *grupo);
int pesquisa_grafo(Grafo *grafo, int ini, int *visitado, int *grupo, int cont_grupo);

int main(void)
{
    Grafo *grafo;
    int *vis, *qtd_grupo, *menor_indice, *grupo;
    int V, J, eh_digrafo = 0, v, w;
    int cont_grupo = 0, maior = 0, maior_grupo = 0, empate = 0, grupo_j = 0;
    int flag = 0, i, cont_diferentes;

    //  printf("Digite a quantidade de cidades existentes:\n");
    scanf("%d %d", &V, &J);

    grafo = cria_grafo(V, V);
    vis = malloc(sizeof(int) * V);
    grupo = malloc(sizeof(int) * V);

    if (V == 1)
    {
        printf("Fique em casa\n");
    }
    else
    {

        while (scanf("%d %d", &v, &w) != EOF)
            insere_aresta(grafo, v, w, eh_digrafo, 0);

        if (v == -1)
        {
            printf("Fique em casa\n");
        }
        else
        {

            cont_diferentes = pesquisa_grafo(grafo, 0, vis, grupo, cont_grupo);

            qtd_grupo = malloc(sizeof(int) * cont_diferentes);
            menor_indice = malloc(sizeof(int) * cont_diferentes);

            int indice = 0;
            for (int i = 0; i < V; i++)
            {
                qtd_grupo[grupo[i]]++;
                if (qtd_grupo[grupo[i]] == 1)
                {
                    menor_indice[indice++] = i;
                }
                if (i == J)
                {
                    grupo_j = grupo[i];
                }
            }

            for (int i = 0; i < cont_diferentes; i++)
            {
                if (i == 0)
                {
                    maior_grupo = i;
                    maior = qtd_grupo[i];
                }
                else if (qtd_grupo[i] > maior)
                {
                    maior_grupo = i;
                    maior = qtd_grupo[i]; 
                }
                else if (qtd_grupo[i] == maior)
                {
                    if (grupo[i] == grupo_j)
                    {
                        maior_grupo = i;
                        maior = qtd_grupo[i];
                    }
                    empate++;
                }
            }

            if (maior == 0)
            {
                printf("Fique em casa\n");
            }
            else if (empate > 0)
            {
                if (maior_grupo == grupo_j)
                {
                    printf("Bora pra estrada\n");
                }
                else
                {
                    printf("Vamos para %d\n", menor_indice[maior_grupo]);
                }
            }
            else if (maior_grupo == J && maior_grupo == 0)
            {
                printf("Fique em casa\n");
            }
            else if (maior_grupo != J)
            {
                printf("Vamos para %d\n", menor_indice[maior_grupo]);
            }
            else if (maior_grupo == grupo_j)
            {
                printf("Bora pra estrada\n");
            }
        }
    }

    libera_grafo(grafo);
    free(vis);
    free(grupo);

    return 0;
}

Grafo *cria_grafo(int qtd_vertices, int grau_max)
{
    Grafo *grafo = (Grafo *)malloc(sizeof(Grafo));

    if (grafo != NULL)
    {
        grafo->qtd_vertices = qtd_vertices;
        grafo->arestas = (int **)malloc(qtd_vertices * (sizeof(int *)));
        grafo->grau = (int *)malloc(qtd_vertices * sizeof(int));
        grafo->grau_max = grau_max;
        for (int i = 0; i < qtd_vertices; i++)
            grafo->arestas[i] = (int *)malloc(grau_max * sizeof(int));
    }

    return grafo;
}

void libera_grafo(Grafo *grafo)
{
    if(grafo != NULL)
    {
        int i;
        for(i=0; i<grafo->qtd_vertices; i++)
            free(grafo->arestas[i]);
        free(grafo->arestas);

        if(grafo->eh_ponderado)
        {
            for(i=0; i<grafo->qtd_vertices; i++)
                free(grafo->pesos[i]);
            free(grafo->pesos);
        }

        free(grafo->grau);
        free(grafo);
    }
}

int insere_aresta(Grafo *grafo, int src, int dest, int eh_digrafo, float peso)
{
    grafo->arestas[src][grafo->grau[src]] = dest;
    grafo->grau[src]++;

    if (eh_digrafo == 0)
        insere_aresta(grafo, dest, src, 1, peso);
    return 1;
}

int dfs_aux(Grafo *grafo, int ini, int *visitado)
{
    for (int i = 0; i < grafo->qtd_vertices; i++)
        visitado[i] = 0;
}

int dfs(Grafo *grafo, int ini, int *visitado, int flag, int cont_grupo, int *grupo)
{

    visitado[ini] = flag;

    grupo[ini] = cont_grupo;

    for (int i = 0; i < grafo->grau_max; i++)
    {
        if (!visitado[grafo->arestas[ini][i]])
            dfs(grafo, grafo->arestas[ini][i], visitado, flag + 1, cont_grupo, grupo);
    }
}

int pesquisa_grafo(Grafo *grafo, int ini, int *visitado, int *grupo, int cont_grupo)
{
    int flag = 1, cont_diferentes = 0;
    dfs_aux(grafo, ini, visitado);

    for (int i = 0; i < grafo->grau_max; i++)
    {
        /* printf("%d\n", i) */
        if (visitado[i] == 0)
        {
            
            dfs(grafo, i, visitado, flag, cont_grupo, grupo);
            cont_diferentes++;
            cont_grupo++;
        }
    }

    return cont_diferentes;
}