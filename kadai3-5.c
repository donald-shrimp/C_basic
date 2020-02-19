#include  <stdio.h>
int main(){
  int num,i=1,maxn,max,minn,min,x;
  double sum=0;
  printf("Input the number of students: ");
  scanf("%d",&num);
    while(i<=num){
      printf("No.%d: ",i);
      scanf("%d",&x);
      if(i==1){
	maxn=i;
	max=x;
	minn=i;
	min=x;
      }
      if(max<x){
	maxn=i;
	max=x;
      }else if(min>x){
	minn=i;
	min=x;
      }
      sum=sum+x;
      i++;
    }
    i--;
    printf("Average: %.1f\n",sum/i);
    printf("Max: No.%d, %d\n",maxn,max);
    printf("Min: No.%d, %d\n",minn,min);
  return 0;
}
