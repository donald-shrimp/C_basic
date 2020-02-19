#include <stdio.h>
#define MAXLEN 50

int main( void ){
  int i;
  char family_name[MAXLEN],first_name[MAXLEN]="Daisuke";

  printf("姓を入力して下さい:");
  scanf("%s",family_name);
  printf("< 2つの文字列を表示します >\n");
  printf("姓:%s\n",family_name);

  /* ----変換指定子%cを用いて出力する場合---- */
  printf("名:");
  for( i = 0; first_name[i] !=0; i++ )
    printf("%c",first_name[i]);
  printf("\n");
  return 0;
}
