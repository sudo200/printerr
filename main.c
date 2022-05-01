#include "printferr.h"

int main(int argc, char ** argv)
{
  printferr("Error at %p!\n", argv);
  return -1;
}

