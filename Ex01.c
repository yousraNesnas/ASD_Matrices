/*EAQP calculer la somme ainsi que le produit des
éléments d'une matrice.*/

#include <stdio.h>

int main()
{
    int n, m, somme = 0, prod = 1;

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
            somme = somme + T[i][j];
            prod = prod * T[i][j];
        }
    }

    printf("\n***************************************\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("T[%d][%d] = %d |", i, j, T[i][j]);

            if (j == m - 1)
                printf("\n");
        }
    }

    printf("\nla somme = %d\n", somme);
    printf("le produit = %d", prod);
}