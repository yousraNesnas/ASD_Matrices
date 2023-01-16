/*On veut compter le nombre d'occurrences d'une
valeur VAL donnée dans chaque ligne d'une
matrice.

*/

#include <stdio.h>

int main()
{
    /*1. EAQP d'afficher le nombre d'occurrences pour
chaque colonne sans utiliser de tableau
supplémentaire.*/
    int n, m, val, oc;

    printf("Donnez le nombre de lignes SVP!\n");
    scanf("%d", &n);

    printf("Donnez le nombre de colonnes SVP!\n");
    scanf("%d", &m);

    int T[n][m];

    printf("Donner la valeur recherchée\n");
    scanf("%d", &val);

    printf("Remplissage de la matrice:\n");
    for (int j = 0; j < m; j++)
    {
        oc = 0;
        for (int i = 0; i < n; i++)

        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T[i][j]);
            if (T[i][j] == val)
            {
                oc = oc + 1;
            }
        }
        printf("Le nombre d’occurrences à la colonne =%d est %d\n", j, oc);
    }

    /*2. Modifier l'algorithme précédent pour qu'il
sauvegarde ces nombres d'occurrences dans un
tableau avant de les afficher.*/
    printf("\n*******************************************\n");
    int T_oc[n];
    int i, j;
    for (j = 0; j < m; j++)

    {
        T_oc[j] = 0;
        for (i = 0; i < n; i++)
        {
            if (T[i][j] == val)
            {
                T_oc[j] = T_oc[j] + 1;
            }
        }
    }
    for (j = 0; j < m; j++)
    {

        printf("Le nombre d’occurrences à la colonne =%d est %d\n", j, T_oc[j]);
    }
}