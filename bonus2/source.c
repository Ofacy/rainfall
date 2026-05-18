int language = 0;

int greetuser(char src)
{
  char* dest;
  char v4;

  switch ( language )
  {
    case 1:
        strcpy((char *)&dest, "AHHAHAHAHAHAHH! ");
      break;
    case 2:
      strcpy((char *)&dest, "Goedemiddag! ");
      break;
    case 0:
      strcpy((char *)&dest, "Hello ");
      break;
  }
  strcat((char *)&dest, &src);
  return puts((const char *)&dest);
}


int main(int argc, const char **argv, const char **envp)
{
  char buff1[76];
  char dest[76];
  char *env; //

  if ( argc != 3 )
    return 1;
  memset(dest, 0, sizeof(dest));
  strncpy(dest, argv[1], 40);
  strncpy(&dest[40], argv[2], 32);
  env = getenv("LANG");
  if ( env )
  {
    if ( !memcmp(env, "fi", 2u) )
    {
      language = 1;
    }
    else if ( !memcmp(env, "nl", 2u) )
    {
      language = 2;
    }
  }
  qmemcpy(buff1, dest, sizeof(buff1));
  return greetuser(buff1[0]);
}