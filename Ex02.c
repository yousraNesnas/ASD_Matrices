/*EAQP déterminer la valeur maximale d'une matrice
et renvoyer ses indices.*/

#include <stdio.h>

int main()
{
    int n, m, max, max_i = 0, max_j = 0;

    printf("Donnez le nombre de lignes SVP!\n");
    scanf("%d", &n);

    printf("Donnez le nombre de colonnes SVP!\n");
    scanf("%d", &m);

    int T[n][m];

    printf("Remplissage de la matrice:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T[i][j]);
            if (i == 0 && j == 0 || max < T[i][j])
            {
                max = T[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("Le max = %d, il se trouve dans la case T[%d][%d]", max, max_i, max_j);
}