#include <stdio.h>
int main(){
  int array[5]={5,4,3,2,1};
  int total=0,i=0;
  while(i<=4){
    total=total+array[i];
    i++;
  }
  printf("arrayの合計値 = %d\n",total);
  return 0;
}
  
