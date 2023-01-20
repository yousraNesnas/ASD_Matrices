/*EAQP transformer une matrice A d'ordre NxM en
un vecteur B de dimension N*M.
Pour tout couple d'indices (i,j), cet algorithme doit
renvoyer la position de cet élément, dans le vecteur
B, et afficher sa valeur à partir de B.*/
#include <stdio.h>

int main()
{
    int n, m, s = 0;

    printf("Donnez le nombres de lignes\n");
    scanf("%d", &n);
    printf("Donnez le nombres colonnes\n");
    scanf("%d", &m);

    int M[n][m];
    int T[n * m];

    // Remplissage de la matrice
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            printf("M[%d][%d] =", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            T[s] = M[i][j];
            s++;
        }
    }

    printf("le nouveau tab B est\n ");
    for (int i = 0; i < n * m; i++)
    {
        printf("B[%d]=%d\n", i + 1, T[i]);
    }

    return 0;
}