#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, cpt = 0;

    printf("combien de lignes contient votre matrice");
    scanf("%d", &m);

    printf("combien de cases contient votre matrice");
    scanf("%d", &n);

    int T[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("donnez la valeur de la %d case de la %d ligne", j, i);
            scanf("%d", &T[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (T[i][j] == 0 || T[i][j] > 0)
            { 
                cpt = cpt + 1;
            }
            else
            { // else if(T[i][j]<0)
                T[i][j] = -T[i][j];
            }
        }
    }
    printf("\nle nombre des val pos et null est %d\n", cpt);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("T[%d][%d]=%d\n", i, j, T[i][j]);
        }
    }

    return 0;
}