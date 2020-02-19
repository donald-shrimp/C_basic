#include <stdio.h>
#define N 10
#define M 10

typedef struct {
  int data[2];
  char id_num[M];
} DATA;

void average_calc(DATA peo[], double mean[], int num);
int max_calc(double mean[], int num);


int main(){
  DATA peo[N];
  int i=1,num,max;
  double mean[N];
  do{
    printf("入力データ数を入力して下さい:");
    scanf("%d",&num);
    if(num<1||num>10){
      printf("データ数が10を超えているか負です\n");
    }
  }while(num<1||num>10);
      
  for(i=0;i<num;i++){
    printf("データNo. %dのID番号:",i+1);
    scanf("%s",peo[i].id_num);
  }
  printf("各IDのデータを入力して下さい\n");            
  for(i=0;i<num;i++){
    printf("%s\n",peo[i].id_num);
    do{
      printf("データNo. %d-a:",i+1);
      scanf("%d",&peo[i].data[0]);
      if(peo[i].data[0]<0||peo[i].data[0]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(peo[i].data[0]<0||peo[i].data[0]>100);
                    
    do{
      printf("データNo. %d-b:",i+1);
      scanf("%d",&peo[i].data[1]);
      if(peo[i].data[1]<0||peo[i].data[1]>100){
	printf("入力データが100を超えているか負です\n");
      }
    }while(peo[i].data[1]<0||peo[i].data[1]>100);
  }
                  
  printf("\n入力された値を表示します\n");
  for(i=0;i<num;i++){
    printf("[%s] (a)%4d (b)%4d\n",peo[i].id_num,peo[i].data[0],peo[i].data[1]);
  }
  average_calc(peo,mean,num);
  printf("\n各データ組の平均値は以下の通りです\n");
  for(i=0;i<num;i++){
    printf("[%s] %.1f\n",peo[i].id_num,mean[i]);
  }
  max=max_calc(mean,num);
  printf("\n平均値の最大値は%sの%.1fです\n",peo[max].id_num,mean[max]);
}
             
void average_calc(DATA peo[],double mean[],int num){
  int i;
  for(i=0;i<num;i++){
    mean[i]=((double)peo[i].data[0]+(double)peo[i].data[1])/2;
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
