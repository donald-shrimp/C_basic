#include <stdio.h>
#define SIZE 10
int main(){
  int i=0,max,min,maxnum,minnum;
  double total;
  int data[SIZE];
  while(i<SIZE){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&data[i]);
    total=total+data[i];
    if(i==0){
      max=data[i];
      maxnum=i+1;
      min=data[i];
      minnum=i+1;
    }else if(max<data[i]){
      max=data[i];
      maxnum=i+1;
    }else if(min>data[i]){
      min=data[i];
      minnum=i+1;
    }
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
  printf("平均値 = %.2f\n",total/10);
  printf("最大値 = %d (no.%d)\n",max,maxnum);
  printf("最小値 = %d (no.%d)\n",min,minnum);
  return 0;
}
