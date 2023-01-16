/*EAQP déterminer la produit de deux matrices. Votre
algorithme doit tenir compte du cas ou le produit
n'est pas défini.*/

#include <stdio.h>

int main()
{
    int n, m, k, l;
    int T1[100][100], T2[100][100], T3[100][100];

    printf("*****************************************\n ");
    printf("ON VEUT CALCULER LE PRODUIT DE 2 MATRICES\n ");
    printf("NOTE: POUR FAIRE LE PRODUIT IL FAUT QUE LE NOMBRE DE COLONNES DE LA MATRICE 1 == NOMBRE DE LIGNES DE LA MATRICE 2\n ");
    printf("*****************************************\n ");

    printf("Donnez le nombre de ligne de la matrice 1: ");
    scanf("%d", &n);

    printf("Donnez le nombre de colonnes de la matrice 1: ");
    scanf("%d", &m);
    // Remplissage de la matrice T1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T1[i][j]);
        }
    }
    // Affichage de la matrice T1
    printf("*****************************************\n");
    printf("La matrice T1 =====>\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d |", T1[i][j]);
        }
        printf("\n");
    }

    do
    {
        printf("Donnez le nombre de ligne de la matrice 2: ");
        scanf("%d", &k);
        if (k != m)
        {
            printf("EREUR: tanque k!=m le produit ne serra pas défini\n ");
        }
    } while (k != m);

    printf("Donnez le nombre de colonnes de la matrice 2: ");
    scanf("%d", &l);

    // Remplissage de la matrice T2
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("T2[%d][%d] = ", i, j);
            scanf("%d", &T2[i][j]);
        }
    }
    // Affichage de la matrice T2
    printf("*****************************************\n");
    printf("La matrice T2 =====>\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("| %d |", T2[i][j]);
        }
        printf("\n");
    }

    // CALCULE DU PRODUIT
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            T3[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                T3[i][j] += T1[i][k] * T2[k][j];
            }
        }
    }

    // Afficher le résultat
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d\t", T3[i][j]);
        }
        printf("\n");
    }
}