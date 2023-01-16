/*EAQP remplacer les valeurs des éléments contenus
dans un rectangle inclus dans une matrice par des
zéros. Le rectangle est déterminé par sa longueur, sa
hauteur et les coordonnées du coin supérieur
gauche.*/
#include <stdio.h>

int main()
{
    int n, m, c1, c2, hauteur, longueur;
    printf("Donner le nombre de lignes\n");
    scanf("%d", &n);
    printf("Donner  le nombre de colonnes\n");
    scanf("%d", &m);

    int M[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("M[%d][%d] = \n", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Donnez les coordonnées\n ");
    scanf("%d%d", &c1, &c2);

    printf("Donnez longueur et la hauteur\n ");
    scanf("%d%d", &longueur, &hauteur);


    for (int i = c1 - 1; i < longueur + c1 - 1; i++)
    {
        for (int j = c2 - 1; j < hauteur + c2 - 1; j++)
        {
            M[i][j] = 0;
        }
    }
    printf("la matrice devien\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", M[i][j]);
        }
        printf("\n");
    }
}
