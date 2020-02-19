#include <stdio.h>
#include <string.h>
#define NUM 10
void reverse(char name[]);

int main(){
  char name[NUM];
  printf("name:");
  scanf("%s",name);
  reverse(name);
  printf("%s",name);
  
  return 0;
}

void reverse(char named[]){
  char rname[NUM];
  int i;
  for(i=0;i<NUM-1;i++){
    rname[NUM-2-i]=named[i];
  }
  rname[NUM-1]=named[NUM-1];
  strcpy(named,rname);
}
  
