#include <stdio.h>
#include <stdlib.h>

int separa(int *v, int l, int r)
{
  int c = v[r];
  int j = l;
  int t;
  for (int k = l; k < r; k++)
  {
    if (v[k] < c)
    {
      t = v[k];
      v[k] = v[j];
      v[j] = t;
      j++;
    }
  }
  t = v[j];
  v[j] = v[r];
  v[r] = t;
  return j;
}

void quicksortM3(int *v, int l, int r)
{
  int j;
  if (r <= l)
    return;
  if (v[(l + r) / 2] > v[r])
  {
    int t;
    t = v[(l + r) / 2];
    v[(l + r) / 2] = v[r];
    v[r] = t;
  }
  if (v[l] > v[(l + r) / 2])
  {
    int t;
    t = v[l];
    v[l] = v[(l + r) / 2];
    v[(l + r) / 2] = t;
  }
  if (v[r] > v[(l + r) / 2])
  {
    int t;
    t = v[r];
    v[r] = v[(l + r) / 2];
    v[(l + r) / 2] = t;
  }
  j = separa(v, l, r);
  quicksortM3(v, l, j - 1);
  quicksortM3(v, j + 1, r);
}

void quickselect(int *v, int p, int l, int r)
{
  int j = separa(v, l, r);
  if (j == p)
    return;
  if (j < p)
    quickselect(v, p, j + 1, r);
  else
    quickselect(v, p, l, j - 1);
}

int main()
{
  int O = 0, Pi = 0;
  int i = 0, j = 0;
  int v[500000];
  char t = 'f';
  while (scanf("%d %d", &O, &Pi) != EOF)
  {
    if (Pi > j)
    {
      j = Pi;
      t = 't';
    }
    if (O == 1)
    {
      v[i] = Pi;
      i++;
    }
    else
    {
      if (Pi == i)
      {
        if (t = 't')
        {
          quicksortM3(v, 0, Pi - 1);
          t = 'f';
        }
        for (int k = 0; k < Pi; k++)
        {
          if (v[k] != 0)
            printf("%d ", v[k]);
        }
        printf("\n");
      }
      else
      {
        if (t = 't')
        {
          quickselect(v, Pi - 1, 0, i - 1);
          quicksortM3(v, 0, Pi - 1);
          t = 'f';
        }
        //printf("Pi:%d\n",Pi);
        for (int k = 0; k < Pi; k++)
        {
          if (v[k] != 0)
            printf("%d ", v[k]);
        }
        printf("\n");
      }
    }
  }

  return 0;
}