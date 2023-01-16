#include<stdio.h> 
#include<stdlib.h>

int main(){
  int mat1[10][10], mat2[10][10], mul[10][10];
  int n,m,i,j,k;

    printf("Entrez le nombre de lignes et de colonnes:\n");
    scanf("%d%d",&n,&m);
  
    printf("Entrez les éléments de la première matrice\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
  
    printf("Entrez les éléments de la deuxième matrice\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    } 
    
  printf("Multiplication du matrice = \n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      mul[i][j]=0;
      for(k = 0; k < m; k++)
      {
        mul[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  //Afficher le résultat
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++) 
    {
      printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }
  return 0;
}