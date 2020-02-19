/* u306024 Ebihara Tsuyoshi 2018/9/27 */
#include <stdio.h>
int main(){
  int a,b;
  printf("二つの整数を入力してください\n");
  printf("整数A：");
  scanf("%d",&a);
  printf("整数B：");
  scanf("%d",&b);
  if(a==b){
    printf("両方とも%dです\n",a);
  }else if(a>b){
    printf("大きい方の値は%dです\n",a);
    printf("小さい方の値は%dです\n",b);
  }else{
    printf("大きい方の値は%dです\n",b);
    printf("小さい方の値は%dです\n",a);
  }
  return 0;
}
    
