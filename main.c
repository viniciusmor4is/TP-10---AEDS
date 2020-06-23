#include <stdio.h>
#include <stdlib.h>
int fatorial (int n)
{

    if (n==0)
        return  1;
    else
        return n*fatorial(n-1);
}

int *ordenar(int *p22, int m)
{

    int i,j, menor;
    int *p21;

    p21= (int*)malloc(m*sizeof(int));

    for(i=0; i<m; i++)
        p21[i]=i;

    for(i=0; i<m; i++)
    {
        for(j=0; j<(m-1); j++)
        {
            if(p22[j]>p22[j+1])
            {
                menor=p22[j];
                p22[j]=p22[j+1];
                p22[j+1]=menor;
                menor=p21[j];
                p21[j]=p21[j+1];
                p21[j+1]=menor;
            }
        }
    }

    return (p21);
}


int multiplicacaoMatriz (int p)
{
    int matrizA[p][p];
    int matrizB[p][p];
    int somaProd;
    int m3[p][p];
    int c;
    if (p==0)
        return 1;
    else
    {
        int i, j, h;
        for (i=0; i<p; i++)
        {
            for (j=0; j<p; j++)
            {
                scanf("%d", &matrizA[i][j]);

            }
        }
        for (i=0; i<p; i++)
        {
            for (j=0; j<p; j++)
            {
                scanf("%d", &matrizB[i][j]);

            }
        }


        /*     for (i=0; i<p; i++)
              {
                  for (j=0; j<p; j++)
                  {
                     printf("%d ", matrizA[i][j]);

                  }
                  printf("\n");
              }

          for (i=0; i<p; i++)
              {
                  for (j=0; j<p; j++)
                  {
                     printf("%d ", matrizB [i][j]);

                  }
                  printf("\n");
              }*/
        for (i=0; i<p; i++)
        {
            for (j=0; j<p; j++)
            {
                somaProd = 0;
                for (h=0; h<p; h++)
                {
                    somaProd = somaProd + (matrizA[i][h] * matrizB[h][j]);
                    m3[i][j] = somaProd;
                }

            }
        }
        for (i=0; i<p; i++)
        {
            for (j=0; j<p; j++)
            {
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }
}



int main()
{
    int E, n, m, i, p;
    int *p1=0,*p2=0;
    scanf("%d", &E);
    switch(E)
    {

    case 1:
    {
        scanf("%d", &n);
        fatorial(n);
        printf("%d\n", fatorial(n));
        break;
    }

    case 2:
    {

        scanf("%d ",&m);
        p1= (int*)malloc(m*sizeof(int));
        for(i=0; i<m; i++)
            scanf("%d", &p1[i]);
        p2=ordenar(p1,m);
        for(i=0; i<m; i++)
            printf("%d ", p2[i]);
        free(p1);
        free(p2);
        break;

    }
    case 3:
    {


        scanf("%d", &p);
        multiplicacaoMatriz(p);
        printf("%d\n", multiplicacaoMatriz(p));
        break;
    }
    }
    return 0;
}
