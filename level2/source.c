#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


char *p()
{
  char s[64];
  const void *v2;
  unsigned int retaddr;

  fflush(stdout);
  gets(s);
  v2 = &retaddr;
  if ( (retaddr & 0xB0000000) == 0xB0000000 )
  {
    printf("(%p)\n", v2);
    _exit(1);
  }
  puts(s);
  return strdup(s);
}


int main(int argc, const char **argv, const char **envp)
{
  p();
  return 0;
}