#include <stdio.h>

double rectangle(double base, double height);

int main(){
  double base,height,area;
  do{
  printf("底辺：");
  scanf("%lf",&base);
  if(base<=0)
    printf("0より大きい値を入力してください\n");
  }while(base<=0);
  do{
  printf("高さ：");
  scanf("%lf",&height);
  if(height<=0)
    printf("0より大きい値を入力してください\n");
  }while(height<=0);
  area=rectangle(base,height);
  printf("面積：%.2f\n",area);
  return 0;
}

double rectangle(double base, double height){
  double area;
  area=base*height;
  return area;
}





  
