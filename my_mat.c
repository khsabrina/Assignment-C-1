#include <stdio.h>
int min(int mat[10][10] ,int i,int j,int k){
    if(mat[i][j]==0 && mat[i][k] + mat[k][j])
    return mat[i][k] + mat[k][j];
    if(mat[i][k] + mat[k][j] < mat[i][j])
    return mat[i][k] + mat[k][j];
    return mat[i][j];
}
int fix(int mat[10][10]){
for (int k = 0; k < 10; k++) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        mat[i][j] = min(mat,i,j,k);
      }
    }
  }
}
int A(int mat[10][10]){
    for (int i = 0;i<10;i++){
         for (int j = 0;j<10;j++){
            int d;
            scanf("%d",&d);
            mat[i][j]=d;
    } 
    }
    fix(mat);
    return 0;
}
int B(int mat[10][10])
{   int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]>0)
    printf("True");
    else
    printf("False");
    return 0;
}
int C(int mat[10][10])
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]>0)
    printf("%d",mat[i][j]);
    else
    printf("-1");
    return 0;
}