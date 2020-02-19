/* u306024 Ebihara Tsuyoshi 2018/9/27 */
#include <stdio.h>
int main(){
  double app,ora,pria=100,prio=50,disa,diso,applep,orangep;
  printf("りんごの個数：");
  scanf("%lf",&app);
  printf("みかんの個数：");
  scanf("%lf",&ora);

  if(app>=10&&app<20){
    disa=0.1;
  }else if(app>=20){
    disa=0.2;
  }else if(app<10&&ora<10&&app+ora>=10){
    disa=0.05;
  }else{
    disa=0;
  }

  if(ora>=10){
    diso=0.2;
  }else if(app<10&&ora<10&&app+ora>=10){
    diso=0.05;
  }else{
    diso=0;
  } 
  /* ringo */
  printf("＜りんご＞\n");
  printf("単価　：%.0f円\n",pria);
  printf("個数　：%.0f個\n",app);
  printf("割引率：%.0f%%\n",disa*100);
  applep=pria*app-pria*disa*app;
  printf("りんごの合計金額：%.1f円\n",applep);
  /* mikan */
  printf("＜みかん＞\n");
  printf("単価　：%.0f円\n",prio);
  printf("個数　：%.0f個\n",ora);
  printf("割引率：%.0f%%\n",diso*100);
  orangep=prio*ora-prio*diso*ora;
  printf("みかんの合計金額：%.1f円\n",orangep);

  printf("＜合計＞\n");
  printf("合計金額：%.1f円\n",applep+orangep);


  return 0;
}
