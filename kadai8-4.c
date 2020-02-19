#include <stdio.h>
#define N 3
void read_vector3D( double vector[] );
void outer_product3D( double vector1[], double vector2[], double vector3[]);
double inner_product3D( double vector1[], double vector2[] );

void read_vector3D( double vector[N] ){
  int i=0;
  while(i<3){
    scanf("%lf",&vector[i]);
    i++;
  }
}

void outer_product3D( double vector1[], double vector2[], double vector3[]){
  vector3[0]=vector1[1]*vector2[2]-vector1[2]*vector2[1];
  vector3[1]=vector1[2]*vector2[0]-vector1[0]*vector2[2];
  vector3[2]=vector1[0]*vector2[1]-vector1[1]*vector2[0];
}

double inner_product3D( double vector1[], double vector2[] ){
  int i=0;
  double inner=0;
  while(i<3){
    inner=inner+(vector1[i]*vector2[i]);
    i++;
  }
  return inner;
}

int main(){
  double vector1[N],vector2[N],vector3[N],ina,inb;
  printf("ベクトル1の3成分を入力してください\n");
  read_vector3D(vector1);
  printf("ベクトル2の3成分を入力してください\n");
  read_vector3D(vector2);
  outer_product3D(vector1,vector2,vector3);
  printf("\n2つのベクトルに垂直なベクトル3（外積）は(%.2f,%.2f,%.2f)です\n\n",vector3[0],vector3[1],vector3[2]);
  ina=inner_product3D(vector1,vector3);
  inb=inner_product3D(vector2,vector3);
  printf("入力ベクトル1とベクトル3の内積は%.2fです\n",ina);
  printf("入力ベクトル2とベクトル3の内積は%.2fです\n",inb);

  return 0;
}
  
