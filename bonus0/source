#include <string.h>


char *p(char *dest, char *s)
{
  char buf[4104];

  puts(s);
  read(0, buf, 1000);
  *strchr(buf, 10) = 0;
  return strncpy(dest, buf, 20);
}


char *pp(char *dest)
{
  char src[20];
  char v3[28];

  p(src, " - ");
  p(v3, " - ");
  strcpy(dest, src);
  dest[strlen(dest)] = " ";
  return strcat(dest, v3);
}

int main(int argc, const char **argv, const char **envp)
{
  char s[42];

  pp(s);
  puts(s);
  return 0;
}

