/* 演習課題1　u306024 Ebihara Tsuyoshi 2018/9/20 */
#include <stdio.h>
int main(){
  int max,a,i=1;
  while(i<=4){
    printf("%d番目の値：",i);
    scanf("%d",&a);
    while(a<=0){
      printf("値は正の数ではありません\n");
      printf("%d番目の値：",i);
      scanf("%d",&a);
    }
    if(i==1||a>max){
      max=a;
    }
    i++;
  }
  printf("最も大きい値は%dです\n",max);
  return 0;
}
