/*Soit une matrice carrée de nombres entiers. On veut
mettre à zéro la première diagonale.
*/

#include <stdio.h>

int main()
{
    /*1. EAQP le faire en utilisant un parcours ligne par
    ligne.*/
    int n, sym = 1;

    printf("Donnez la taille de la matrice SVP!\n");
    scanf("%d", &n);

    int T[n][n];

    printf("Remplissage de la matrice:\n");
    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n; j++)

        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n; j++)

        {
            if (T[i][j] != T[j][i])
            {
                sym = 0;
            }
        }
    }
    if (sym == 0)
        printf("La matrice n'est pas symitrique");
    else
        printf("ELLE EST SYMETRIQUE");

    printf("\n***************************************\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d |", T[i][j]);

            if (j == n - 1)
                printf("\n");
        }
    }
}