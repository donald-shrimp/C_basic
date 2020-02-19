#include <stdio.h>
int main(){
  int num,two=0,five=0,ten=0;
  printf("Input a positive integer\n");
  scanf("%d",&num);
  while(1){
    if(num==-1)
      break;
    if(num%10==0){
      ten++;
    }else if(num%2==0){
      two++;
    }else if(num%5==0){
      five++;
    }
    if(ten>=1){
      printf("%d is a multiple of 2 and 5\n",num);
      ten=0;
    }else if(two>=1){
      printf("%d is a multiple of 2\n",num);
      two=0;
    }else if(five>=1){
      printf("%d is a multiple of 5\n",num);
      five=0;
    }else{
      printf("%d is not a multiple of 2 and 5\n",num);
    }
    scanf("%d",&num);
  }
  return 0;
}
