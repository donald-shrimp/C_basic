#include <stdio.h>
int main(){
  int i=1,j=1,h,w;
  printf("H: ");
  scanf("%d",&h);
  printf("W: ");
  scanf("%d",&w);
  while(1){
    if(h==0&&w==0)
      break;
    while(i<=h){
      while(j<=w){
	if(i==1||i>=h){
	  printf("#");
	}else if(j==1||j>=w){
	  printf("#");
	}else{
	  printf(".");
	}
	if(j>=w){
	  printf("\n");
	}
	j++;
	}
      if(i>=h)
	printf("\n");
      i++;
      j=1;
    }
    printf("H: ");
    scanf("%d",&h);
    printf("W: ");
    scanf("%d",&w);
    i=1;j=1;
  }
  return 0;
}

