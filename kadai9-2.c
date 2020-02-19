#include <stdio.h>
#define A 3
#define B 4

int main(){
  int i,j,old[A][B];
  printf("住人の年齢を入力して下さい\n");
  for(i=0;i<A;i++){
    printf("<< %d階 >>\n",i+1);
    for(j=0;j<B;j++){
      printf("%d号室:",j+1);
      scanf("%d",&old[i][j]);
    }
  }
  printf("\n<< 年齢見取図 >>\n");
  for(i=A-1;i>-1;i--){
    printf("[%d階]",i+1);
    for(j=0;j<B;j++){
      printf(" (%d号室)%d歳",j+1,old[i][j]);
      if(j==3)
	printf("\n");
    }
  }
}
