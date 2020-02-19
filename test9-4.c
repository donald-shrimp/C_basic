

#include <stdio.h>
#define N 10
int main(){
  int score[N][3];
do{
  printf("(1)英語:");
  scanf("%d",&score[0][1]);
 }while(score[0][1]<0||score[0][1]>100);
 printf("%d",score);
}
