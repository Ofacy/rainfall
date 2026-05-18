int main(int argc, const char **argv, const char **envp)
{
  char* dest[40];
  int res;

  res = atoi(argv[1]);
  if ( res > 9 )
    return 1;
  memcpy(dest, argv[2], 4 * res);
  if ( res == 1464814662 )
    execl("/bin/sh", "sh", 0);
  return 0;
}