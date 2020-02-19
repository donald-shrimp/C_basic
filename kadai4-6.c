#include <stdio.h>
void error_message(void);
int get_month(void);

void error_message(void){
  printf("入力ミスです！\n");
}

int get_month(void){
  int month;
  do{
    printf("月：");
    scanf("%d",&month);
    if(month<1||month>12)
      error_message();
  }while(month<1||month>12);
  return month;
}

int main(){
  int birth,month;
  printf("＜誕生日の月＞\n");
  birth=get_month();
  printf("＜現在の月＞\n");
  month=get_month();
  if(birth==month){
    printf("今月が誕生日ですね\n");
  }else if(month>birth){
    printf("誕生日まであと%dヶ月ですね\n",12-month+birth);
  }else{
    printf("誕生日まであと%dヶ月ですね\n",12-birth+month);
  } 
  return 0;
}
