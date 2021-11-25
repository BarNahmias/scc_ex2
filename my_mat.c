#include <stdio.h>
#include "my_mat.h"
#define N 10

 int  matrix [N][N];//= {{0 ,3 ,1 ,0 ,0 ,2 ,0 ,0 ,0 ,0},{3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0},{1 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,0 ,0 ,5 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,0 ,0 ,4 ,1 ,1}
// ,{2 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,5 ,4 ,0 ,0 ,0 ,0 ,2},{0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,1 ,0 ,0 ,2 ,0 ,0}};



//create new matrix from inpot 
void newMatrix(){
for(int i=0;i<N;i++) {
    for(int j=0;j<N;j++){
       scanf("%d",&matrix[i][j]);
       }
   }
}

//return (int)  value from  route(data) in location in [i][j]   
int Route(int mat [N][N]){
    int i;
    int j;
    int ans;
    scanf("%d",&i);
    scanf("%d",&j);
    if(mat[i][j]!=0){
     ans=mat[i][j] ;
     return ans;
    }
    return -1;
    }

//cheack if exists route(data) in location in [i][j]
// and return true or false


void isExists(){
  int newMatrix[N][N], i, j, k;
  int route;
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      newMatrix[i][j] = matrix[i][j];

  // Adding vertices individually
  for (k = 0; k < N; k++){
    for (i = 0; i < N; i++){
      for (j = 0; j < N; j++){
        if (newMatrix[i][k] + newMatrix[k][j] < newMatrix[i][j])
          newMatrix[i][j] = newMatrix[i][k] + newMatrix[k][j];
      }
    }
  }route = Route(newMatrix);
  if(route!= -1 ){
    printf("True\n");}
    else {printf("False\n");} 
}






// Implementing floyd warshall algorithm
void floydWarshall(){
  int newMatrix[N][N], i, j, k;
  int route;
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      newMatrix[i][j] = matrix[i][j];

  // Adding vertices individually
  for (k = 0; k < N; k++){
    for (i = 0; i < N; i++){
      for (j = 0; j < N; j++){
        if (newMatrix[i][k] + newMatrix[k][j] < newMatrix[i][j])
          newMatrix[i][j] = newMatrix[i][k] + newMatrix[k][j];
      }
    }
  }route = Route(newMatrix);
   printf("%d\n" ,route);
}
