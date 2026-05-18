#include "stdio.h"
#include "strings.h"

int main(int argc, const char **argv, const char **envp)
{
  char ptr[132];
  FILE *file;

  file = fopen("./source.c", "r");
  memset(ptr, 0, sizeof(ptr));
  if ( !file || argc != 2 )
    return -1;
  fread(ptr, 1, 66, file);
  ptr[65] = 0;
  ptr[atoi(argv[1])] = 0;
  fread(&ptr[66], 1u, 65, file);
  fclose(file);
  if ( !strcmp(ptr, argv[1]) )
    execl("/bin/sh", "sh", 0);
  else
    puts(&ptr[66]);
  return 0;
}