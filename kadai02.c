/* 演習課題2　u306024 Ebihara Tsuyoshi 2018/9/20 */
#include <stdio.h>
int main(){
  int i=9,j=9;
  while(i>=1){
    while(j>=1){
      printf("%d ",i*j);
      if(j==1)
	printf("\n");
      j--;
    }
    j=9;
    i--;
  }
  return 0;
}
