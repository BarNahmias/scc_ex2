#include "my_mat.h"
#include <stdio.h>
#define N 10


int  matrix [N][N];

int main(){

 
//= {{0 ,3 ,1 ,0 ,0 ,2 ,0 ,0 ,0 ,0},{3 ,0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0},{1 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,0 ,0 ,5 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,0 ,0 ,4 ,1 ,1}
// ,{2 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,5 ,4 ,0 ,0 ,0 ,0 ,2},{0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0},{0 ,0 ,0 ,0 ,1 ,0 ,0 ,2 ,0 ,0}};


char dig;

while( dig!='D'){
scanf("%c",&dig);

switch (dig)
{
case 'A' :
newMatrix();
break; //create new matrix from inpot 
case 'B' :
isExists();
break; //cheack if exists route(data) in location in [i][j]  and return true or false
case 'C' :
floydWarshall();
break; //return (int)  value from  route(data) in location in [i][j]   
default :; break;        
        }
    }return 0;
}




