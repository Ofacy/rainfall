#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int m()
{
  return puts("Nope");
}

int n()
{
  return system("/bin/cat /home/user/level7/.pass");
}

int main(int argc, const char **argv, const char **envp)
{
  int (**v4)(void) = (int (**)(void))malloc(sizeof(int (*)(void)));
  char *v5;

  v5 = (char *)malloc(64);
  *v4 = m;
  strcpy(v5, argv[1]);
  return (*v4)();
}