#include <stdio.h>
#define N 10
void add_data(int array[ ], int n);
int main(){
  int array[N],n,i=0;
  printf("データ数を入力して下さい（1～10）:");
  scanf("%d",&n);
  printf("データを入力して下さい\n");
  while(i<n){
    printf("No.%1d:",i+1);
    scanf("%d",&array[i]);
    i++;
  }
  add_data(array,n);
  i=0;
  printf("計算して並べました\n");
  while(i<n){
    printf("No.%1d:%d\n",i+1,array[i]);
    i++;
  }
  return 0;
}

void add_data(int array[ ], int n){
  int num=0,i=0;
  while(i<n){
    array[i]=array[i]*10;
    num=num+array[i];
    array[i]=num;
    i++;
  }
}
