/* u306024 Ebihara Tsuyoshi 2018/9/27 */
#include <stdio.h>
int main(){
  int num;
  printf("正の整数を入力してください：");
  scanf("%d",&num);
  if(num%2==1){
    printf("%dは奇数です\n",num);
  }else{
    printf("%dは偶数です\n",num);
  }
  return 0;
}
