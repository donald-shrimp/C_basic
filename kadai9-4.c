#include <stdio.h>
#define N 10
void show_score(int score[N][3], int subject, int n);
void read_score(int score[N][3], int n);

void read_score(int score[N][3], int n){
  int i;
for(i=0;i<n;i++){
  printf("%d番目の学生\n",i+1);
  do{
    printf("(1)英語:");
    scanf("%d",&score[i][1]);
  }while(score[i][1]<0||score[i][1]>100);
  do{
    printf("(2)数学:");
    scanf("%d",&score[i][2]);
  }while(score[i][2]<0||score[i][2]>100);
  do{
    printf("(3)国語:");
    scanf("%d",&score[i][3]);
  }while(score[i][3]<0||score[i][3]>100);
 }
}

void show_score(int score[N][3], int subject, int n){
  int i;
  if(subject==1){
    printf("[英語]\n");
    printf("番号  得点\n");
  }else if(subject==2){
    printf("[数学]\n");
    printf("番号  得点\n");
  }else if(subject==3){
    printf("[国語]\n");
    printf("番号  得点\n");
  }
  for(i=0;i<n;i++){
    printf("%d     %d\n",i+1,score[i][subject]);
  }
}
    

int main( void ){
  int j,n;
  int score[N][3];

  printf("学生数を入力して下さい（1～10）\n");
  printf("学生数:");
  scanf("%d",&n);
  if(n>10)
    n=N;
  read_score(score,n);  
  while(1){
    printf("\n得点表を表示する科目を選択して下さい\n英語=>1,数学=>2,国語=>3,終了=>0:");
    scanf("%d",&j);
    printf("\n");
    if(j==0||j>3){
      printf("終了します");
      break;
    }else{
      show_score(score,j,n);
    }
  }
  return 0;
}

