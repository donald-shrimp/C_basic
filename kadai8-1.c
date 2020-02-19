#include <stdio.h>
#define N 20
int max_array(int score[], int n);

int main(){
  int score[N],max,i=0,n;
  printf("試験の最高点を計算します，人数を入力してください（1～20）:");
  scanf("%d",&n);
  while(i<n){
    printf("No.%1d:",i+1);
    scanf("%d",&score[i]);
    i++;
  }
  max=max_array(score,n);
  printf("%d人の最高点は%d点です\n",n,max);
  return 0;
}

int max_array(int score[], int n){
  int max,i=0;
  while(i<n){
    if(i==0||max<score[i]){
      max=score[i];
    }
    i++;
  }
  return max;
}
