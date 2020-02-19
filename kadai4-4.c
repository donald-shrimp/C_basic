#include <stdio.h>
void draw_char(int a_number, int s_number);

int main(){
  int anum,snum;
  printf("アスタリスクの数：");
  scanf("%d",&anum);
  printf("シャープの数：");
  scanf("%d",&snum);
  draw_char(anum,snum);
  return 0;
}

void draw_char(int a_number, int s_number){
  int i=1,j=1;
  while(i<=a_number){
    printf("*");
    i++;
  }
  while(j<=s_number){
    printf("#");
    j++;
  }
  printf("\n");
}
