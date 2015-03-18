#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc < 2) exit();
  if(strcmp(argv[1], "-x") == 0) {
    printf(1, "removing execution permissions from %s\n", argv[2]);
  }
  exit();
}
