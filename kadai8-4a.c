#include<stdio.h>
#define NUM 10
void read_vector3D(double vector[]);

void outer_product3D(double vector1[], double vector2[], double vector3[]);

double inner_product3D(double vector1[], double vector2[]);

int main(void){
  double vector1[3],vector2[3],vector3[3],se1,se2;
  printf("ベクトル1の3成分を入力してください\n");
  read_vector3D(vector1);
  printf("ベクトル2の3成分を入力してください\n");
  read_vector3D(vector2);
  printf("\n");
  outer_product3D(vector1,vector2,vector3);
  printf("2つのベクトルに垂直なベクトル3（外積）は（%.2f, %.2f, %.2f）です\n",vector3[0],vector3[1],vector3[2]);
  printf("\n");

  se1 = inner_product3D(vector1,vector3);
  se2 = inner_product3D(vector2,vector3);

  printf("入力ベクトルaとベクトルcの内積は%.2fです\n",se1);
  printf("入力ベクトルbとベクトルcの内積は%.2fです\n",se2);

  return 0;
}

void read_vector3D(double vector[ ]){
  int i;
  for(i=0;i<3;i++){
    scanf("%lf",&vector[i]);
  }
}

void outer_product3D(double vector1[ ], double vector2[ ], double vector3[ ]){
  vector3[0]=vector1[1]*vector2[2]-vector1[2]*vector2[1];
  vector3[1]=vector1[2]*vector2[0]-vector1[0]*vector2[2];
  vector3[2]=vector1[0]*vector2[1]-vector1[1]*vector2[0];
}

double inner_product3D( double vector1[], double vector2[] ){
  int i;
  double sum=0;
  for(i=0;i<3;i++){
    sum=sum+(vector1[i]*vector2[i]);
  }
  return sum;
}
