#include <stdio.h>
int main( void )
{
  int i,a,sum=0;
  printf("min: ");
  scanf("%d",&i);
  printf("max: ");
  scanf("%d",&a);
  while(i<=a){
    sum=sum+i;
    i++;
  }
  printf("sum: %d\n",sum);
  return 0;
}


