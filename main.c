#include "my_mat.h"
#include <stdio.h>
#define N 10


int  matrix [N][N];

int main(){
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
        }
    }
}




