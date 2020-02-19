#include <stdio.h>
#define N 20
void get_score( int score[ ], int n);
void error_message(int point);
void show_array( int array[ ], int n);
int max_array(int array[ ], int n);
int min_array(int array[ ], int n);
double average_array(int array[ ], int n);

int main(){
  int n,max,min,array[N];
  double ave;
  printf("データ数を入力してください（1～20）:");
  scanf("%d",&n);
  get_score(array,n);
  show_array(array,n);
  max=max_array(array, n);
  min=min_array(array, n);
  ave=average_array(array,n);
  printf("最大値は%dです\n",max);
  printf("最小値は%dです\n",min);
  printf("平均値は%.1fです\n",ave);
}


void get_score( int score[N], int n){
  int i=0;
    while(i<n){
      do{
      printf("No.%1d:",i+1);
      scanf("%d",&score[i]);
      if(score[i]<0||score[i]>100)
	error_message(score[i]);
      }while(score[i]<0||score[i]>100);
	i++;
    }
}

void error_message(int point){
  if(point<0)
    printf("****入力ミス:%dは0未満です****\n",point);
  else if(point>100)
    printf("****入力ミス:%dは100をこえています****\n",point);
}

void show_array( int array[N], int n){
  int i=0;
  printf("\nデータを表示します\n");
  while(i<n){
    printf("No.%1d:%d\n",i+1,array[i]);
    i++;
  }
  printf("\n");
}

int max_array(int array[N], int n){
  int max,i=0;
  while(i<n){
    if(i==0||max<array[i]){
      max=array[i];
    }
    i++;
  }
  return max;
}

int min_array(int array[N], int n){
  int min,i=0;
  while(i<n){
    if(i==0||min>array[i]){
      min=array[i];
    }
    i++;
  }
  return min;
}

double average_array(int array[N], int n){
  int i=0;
  double ave,sum=0;
  while(i<n){
    sum=sum+array[i];
    i++;
  }
  ave=sum/(double)n;
  return ave;
}
