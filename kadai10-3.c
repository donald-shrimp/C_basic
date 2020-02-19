#include <stdio.h>
#define MAXLEN 50

int main( void ){
  int i=0,famnum,firnum;
  char family_name[MAXLEN],first_name[MAXLEN];

  printf("名の字数を入力して下さい:");
  scanf("%d",&firnum);
  while(i<firnum){
    printf("first_name[%d]=",i);
    scanf("%*c%c",&first_name[i]);
    i++;
  }
  first_name[firnum]='\0';
  printf("姓の字数を入力して下さい:");
  scanf("%d",&famnum);
  for(i=0;i<famnum;i++){
    printf("family_name[%d]=",i);
    scanf("%*c%c",&family_name[i]);
  }
  family_name[famnum]='\0';
  printf("\n選手の氏名は\n");
  printf("姓:%s\n",family_name);
  printf("名:%s\n",first_name);
  return 0;
}

