#include <stdio.h>
#define SIZE 10
int main(){
  int i=0,total=0;
  int data[SIZE];
  while(i<SIZE){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&data[i]);
    total=total+data[i];
    i++;
  }
  printf("\n");
  printf("データ一覧:\n");
  i=0;
  while(i<SIZE){
    printf("[No.%2d] %d\n",i+1,data[i]);
    i++;
  }
  printf("\n");
  printf("合計値 = %d\n",total);
  return 0;
}
