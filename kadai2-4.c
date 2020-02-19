/* u306024 Ebihara Tsuyoshi 2018/9/27 */
#include <stdio.h>
int main(){
  int a,i=1,max,min;
  printf("三つの整数を入力してください\n");
  while(i<=3){
    printf("整数（No.%d）：",i);
    scanf("%d",&a);
    if(i==1){
      max=a;
      min=a;
    }
    if(a>max){
      max=a;
    }
    if(a<min){
      min=a;
    }
    i++;
  }
  printf("最大値：%d\n",max);
  printf("最小値：%d\n",min);
  return 0;
}
