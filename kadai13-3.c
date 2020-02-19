#include <stdio.h>
#define N 10
void average_calc(int data[][2], double mean[], int num);
int max_calc(double mean[], int num);

     
int main(){
  int data[N][2],i=1,num,max;
  double mean[N];
  do{
    printf("入力データ数を入力して下さい:");
    scanf("%d",&num);
    if(num<1||num>10){
      printf("データ数が10を超えているか負です\n");
    }
  }while(num<1||num>10);
          
  for(i=0;i<num;i++){
    do{
      printf("データNo. %d-a:",i+1);
      scanf("%d",&data[i][0]);
      if(data[i][0]<0||data[i][0]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(data[i][0]<0||data[i][0]>100);
            
    do{
      printf("データNo. %d-b:",i+1);
      scanf("%d",&data[i][1]);
      if(data[i][1]<0||data[i][1]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(data[i][1]<0||data[i][1]>100);
  }
          
  printf("\n入力された値を表示します\n");
  for(i=0;i<num;i++){
    printf("[No. %d] (a)%4d (b)%4d\n",i+1,data[i][0],data[i][1]);
  }
  average_calc(data,mean,num);
  printf("\n各データ組の平均値は以下の通りです\n");
  for(i=0;i<num;i++){
    printf("[No. %d] %.1f\n",i+1,mean[i]);
  }
  max=max_calc(mean,num);
  printf("\n平均値の最大値はNo. %dの%.1fです\n",max+1,mean[max]);
}
     
void average_calc(int data[][2],double mean[],int num){
  int i;
  for(i=0;i<num;i++){
    mean[i]=((double)data[i][0]+(double)data[i][1])/2;
  }
}

int max_calc(double mean[], int num){
  int i,maxn,max;
  for(i=0;i<num;i++){
    if(i==0||maxn<mean[i]){
      maxn=mean[i];
      max=i;
    }
  }
  return max;
}
