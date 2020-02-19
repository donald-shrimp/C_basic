#include <stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);

int main(){
  int a,b;
  do{
  printf("a:");
  scanf("%d",&a);
  }while(a<=0);
  do{
  printf("b:");
  scanf("%d",&b);
  }while(b<=0);
  printf("aとbの最大公約数：%d\n",gcd(a,b));
  printf("aとbの最小公倍数：%d\n",lcm(a,b));

  return 0;
}

int gcd(int a, int b){
  int big,small,odd,gcd;
  if(a<=b){
    big=b;
    small=a;
  }else{
    big=a;
    small=b;
  }

  do{
    odd=big%small;
    if(odd==0)
      break;
    big=small;
    small=odd;
  }while(odd>0);
  gcd=small;

  return gcd;
}

int lcm(int a, int b){
  int lcm;
  lcm=a*b/gcd(a,b);
  return lcm;
}
    
