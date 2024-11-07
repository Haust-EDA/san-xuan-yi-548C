//请在下方输入你的代码：
#include<stdio.h>

void MulTab_as_Tra(void);
void MulTab_as_InTra(void);

int main(void)
{
  MulTab_as_Tra();
  MulTab_as_InTra();
  return 0;
}

void MulTab_as_Tra(void)
{
  char spring[41];
  char buff[2] = { 0 };
  int res;
  for (int n = 0; n < 41; n++) spring[n] = ' ';
  for (int Line = 1; Line < 10; Line++) {
    spring[45 - 5 * Line] = '\0';
    printf(spring);
    for (int n = 1; n <= Line; n++) {
      res = Line * n;
      buff[0] = res < 9 ? ' ' : '\0';
      printf("%d x %d = %s%d ", n, Line, buff, res);
    }
    puts("");
    spring[45 - 5 * Line] = ' ';
  }
}

void MulTab_as_InTra(void)
{
  char spring[41];
  char buff[2] = { 0 };
  int res;
  for (int n = 0; n < 41; n++) spring[n] = ' ';
  for (int Line = 9; Line > 0; Line--) {
    spring[45 - 5 * Line] = '\0';
    printf(spring);
    for (int n = 1; n <= Line; n++) {
      res = Line * n;
      buff[0] = res < 9 ? ' ' : '\0';
      printf("%d x %d = %s%d ", n, Line, buff, res);
    }
    puts("");
    spring[45 - 5 * Line] = ' ';
  }
}
