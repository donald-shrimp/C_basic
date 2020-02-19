#include <stdio.h>
int get_length( char str[ ] );
#define N 100

int main(){
  int i=0,num;
  char name[N],eman[N];
  printf("文字列:");
  scanf("%s",name);
  num=get_length(name);
  for(i=0;i<num;i++){
    eman[num-i-1]=name[i];
  }
  eman[num]=name[num];
  printf("文字列の長さ:%d\n",num);
  printf("文字列（逆順）:%s.%s\n",name,eman);
  return 0;
}

int get_length( char str[ ] ){
  int num=0,i;
  for(i=0;str[i]!=0;i++){
    num++;
  }
  return num;
}
    
