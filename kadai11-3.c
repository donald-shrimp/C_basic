#define N 5
#include <stdio.h>
struct gakusei{
  int id;
  double math;
  double eng;
  double phy;
  double sum;
};
  int main(){
    int i=0;
    double ave,min,max,sum2=0;
    struct gakusei test[N];
    while(i<N){
      test[i].sum=0;
      double x=0;
      printf("%d人目の学生番号は?:",i+1);
      scanf("%d",&test[i].id);
      printf("数学の点数は?:");
      scanf("%lf",&test[i].math);
      printf("英語の点数は?:");
      scanf("%lf",&test[i].eng);
      printf("物理の点数は?:");
      scanf("%lf",&test[i].phy);
      x=test[i].math+test[i].eng+test[i].phy;
      if(i==0||max<x){
	max=x;
      }
      if(i==0||min>x){
	min=x;
      }
      test[i].sum=test[i].sum+x;
      sum2=test[i].sum+sum2;
      i++;
    }
    ave=sum2/N;
    printf("\n学生番号 数学 英語 物理 合計\n");
    i=0;
    while(i<N){
      printf("  %d   %.0f   %.0f   %.0f  %.0f\n",test[i].id,test[i].math,test[i].eng,test[i].phy,test[i].sum);
      i++;
    }
    printf("最高点は%.0f点\n",max);
    printf("最低点は%.0f点\n",min);
    printf("平均点は%.2f点\n",ave);
    return 0;
  }
