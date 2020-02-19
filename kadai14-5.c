#include <stdio.h>
void print_board(int board[3][3]); /* プロトタイプ宣言 */
void mark_board(int board[3][3], int turn);
int judge(int board[3][3]);

int main(void) {
  int board[3][3] = {{0,0,0},
                     {0,0,0},
                     {0,0,0}};            /* 0で初期化 */
  int turn=1,i,winorlose;
  for(i=0;i<9;i++){
    mark_board(board , turn);
    print_board(board);
    winorlose=judge(board);
    if(winorlose==1){
      printf("oの勝ちです\n");
      break;
    }else if(winorlose==-1){
      printf("xの勝ちです\n");
      break;
    }else if(winorlose==-2){
      printf("引き分けです\n");
      break;
    }
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
}

int judge(int board[3][3]){
  int i,j,count=0;
  for(i=0;i<3;i++){
    /*たて*/
    if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]){
      if(board[i][0]==1){
	return 1;
	break;
      }else if(board[i][0]==-1){
	return -1;
	break;
      }
      /*よこ*/
    }else if(board[0][i]==board[1][i]&&board[0][i]==board[2][i]){
      if(board[0][i]==1){
	return 1;
	break;
      }else if(board[0][i]==-1){
	return -1;
	break;
      }
      /*ななめ１*/
    }else if(board[0][0]==board[1][1]&&board[2][2]==board[0][0]){
      if(board[1][1]==1){
        return 1;
        break;
      }else if(board[1][1]==-1){
        return -1;
        break;
      }
      /*ななめ２*/
    }else if(board[0][2]==board[1][1]&&board[2][0]==board[1][1]){
      if(board[1][1]==1){
        return 1;
        break;
      }else if(board[1][1]==-1){
        return -1;
        break;
      }
    }
  }
  /*ひきわけ*/
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(board[i][j]==0){
	count++;
      }
    }
  }
  if(count==0){
    return -2;
  }
    return 0;
}
