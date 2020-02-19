#include <stdio.h>
#define STA 4
#define NAM 100
int get_length(char str[]);
int main()
{
  int i, j, count = 0, match = 0, num;
  char state[STA][NAM], name[STA][NAM], yorn[NAM], sersta[NAM];
  for (i = 0; i < STA; i++)
  {
    printf("[No.%d]\n", i + 1);
    printf("名前:");
    scanf("%s", name[i]);
    printf("出身地:");
    scanf("%s", state[i]);
    printf("\n");
  }
  while (1)
  {
    count = 0;
    printf("検索しますか？（yes or no）");
    scanf("%s", yorn);
    if (yorn[0] == 'y')
    {
      printf("検索する都道府県名を入力して下さい:");
      scanf("%s", sersta);
      printf("\n<検索結果>\n");
      for (i = 0; i < STA; i++)
      {
        num = get_length(state[i]);
        for (j = 0; j < num; j++)
        {
          if (state[i][j] == sersta[j])
          {
            match++;
          }
        }
        if (match == num)
        {
          count++;
          printf("[No.%d]  %s  %s\n", i + 1, state[i], name[i]);
        }
        match = 0;
      }
      if (count == 0)
      {
        printf("該当者なし\n");
      }
    }
    else if (yorn[0] == 'n')
    {
      printf("終了\n");
      break;
    }
    else
    {
      printf("終了\n");
      break;
    }
  }
}

int get_length(char str[])
{
  int num = 0, i;
  for (i = 0; str[i] != 0; i++)
  {
    num++;
  }
  return num;
}
