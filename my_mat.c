#include <stdio.h>
#include "my_mat.h"
#define N 10



//create new matrix from inpot 

void newMatrix(int  matrix [N][N]){
for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++){
       scanf("%d",&matrix[i][j]) ;
       }
   }
}



//cheack if exists route(data) in location in [i][j]
// and return true or false
int isExists( int matix [N][N] )
{
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(matix[i][j]!=0){
      return   printf("TRUE");
      
    }
    

    return  printf("False");
}



//return (int)  value from  route(data) in location in [i][j]   
int Route(int matix [N][N]){
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(matix[i][j]!=0){
      return matix[i][j];
    }
    return  printf("-1");
    }

// Implementing floyd warshall algorithm
int floydWarshall(int graph[N][N]) {
  int matrix[N][N], i, j, k;
  int route;

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      matrix[i][j] = graph[i][j];

  // Adding vertices individually
  for (k = 0; k < N; k++) {
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }route = Route(matrix);
   printf("%d",route);
  
}
