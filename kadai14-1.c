#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */

int main(void) {
  int board[3][3] = {{0,0,0},
		     {0,0,0},
		     {0,0,0}};            /* 0で初期化 */
  
  board[0][1] = 1;
  board[0][2] = 1;
  board[1][2] = -1;
  board[1][1] = -1;

  print_board(board);
  return 0;
}

void print_board(int board[3][3]){
  int i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("|");
      if(board[i][j]==0){
	printf(" ");
      }else if(board[i][j]<0){
	printf("x");
      }else if(board[i][j]>0){
	printf("o");
      }
    }
    printf("|\n");
  }
}
