#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */
void mark_board(int board[3][3], int turn);

int main(void) {
  int board[3][3] = {{0,0,0},
                     {0,0,0},
                     {0,0,0}};            /* 0で初期化 */
  int turn=1,i;
  for(i=0;i<9;i++){
    mark_board(board , turn);
    print_board(board);
    turn=turn*(-1);
  }
  return 0;
}

void print_board(int board[3][3]){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("|");
      if(board[i][j]==0){
        printf(" ");
      }else if(board[i][j]==-1){
        printf("x");
      }else if(board[i][j]==1){
        printf("o");
      }
    }
    printf("|\n");
  }
}

void mark_board(int board[3][3], int turn){
  int i,j;
  if(turn==1){
    printf("oのターンです\n");
  }else if(turn==-1){
    printf("xのターンです\n");
  }
  do{
  printf("縦位置は？");  scanf("%d",&i);
  printf("横位置は？");  scanf("%d",&j);
  if(i<0||i>2||j<0||j>2||board[i][j]!=0){
    printf("そこには置けません\n");
  }
  }while(i<0||i>2||j<0||j>2||board[i][j]!=0);
  board[i][j]=turn;
  turn=turn*(-1);
}
