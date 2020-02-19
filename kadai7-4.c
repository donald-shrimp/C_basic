#include <stdio.h>
#define SIZE 10
int main(){
  int i=0,search,counta=0,countb=0,countc=0;
  int data[SIZE];
  while(i<SIZE){
    printf("データ[No.%2d]を入力してください: ",i+1);
    scanf("%d",&data[i]);
    i++;
  }
  i=0;
  printf("\n");
  printf("検索用データを入力してください: ");
  scanf("%d",&search);
  printf("\n");
  printf("検索結果\n");
  printf("検索データ: %d\n",search);
  i=0;
  printf("検索データより小さいデータ: ");
  while(i<SIZE){
    if(search>data[i]){
      if(1<=counta)
	printf(",");
      printf("%d",data[i]);
      counta++;
    }
    i++;
  }
  i=0;
  printf("\n検索データと等しいデータ: ");
  while(i<SIZE){
    if(search==data[i]){
      if(1<=countb)
	printf(",");
      printf("%d",data[i]);
      countb++;
      }
    i++;
  }
  i=0;
  printf("\n検索データより大きいデータ: ");
  while(i<SIZE){
    if(search<data[i]){
      if(1<=countc)
	printf(",");
      printf("%d",data[i]);
      countc++;
    }
    i++;
  }
  printf("\n");
  return 0;
}
