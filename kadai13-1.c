#include <stdio.h>
#define N 10

int main(){
  int data[N][2],i=1,num;
  do{
    printf("入力データ数を入力して下さい:");
    scanf("%d",&num);
    if(num<1||num>10){
      printf("データ数が10を超えているか負です\n");
    }
  }while(num<1||num>10);
  
  for(i=1;i<=num;i++){
    do{
      printf("データNo. %d-a:",i);
      scanf("%d",&data[i][0]);
      if(data[i][0]<0||data[i][0]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(data[i][0]<0||data[i][0]>100);
    
    do{
      printf("データNo. %d-b:",i);
      scanf("%d",&data[i][1]);
      if(data[i][1]<0||data[i][1]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(data[i][1]<0||data[i][1]>100);
  }
  
  printf("\n入力された値を表示します\n");
  for(i=1;i<=num;i++){
    printf("[No. %d] (a)%4d (b)%4d\n",i,data[i][0],data[i][1]);
  }
}
