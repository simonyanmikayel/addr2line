// addr2line_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "addr2line.h"

static int line_info(
  unsigned long address,
  unsigned char op_index,
  char *filename,
  unsigned int line,
  unsigned int column,
  unsigned int discriminator,
  int end_sequence)
{
  return 1;
}

int main(int argc, char **argv)
{
    resolve_addr(argc, argv);
    //enum_file_addresses(argv[2], line_info);
    //enum_file_addresses("a", line_info);
    return 0;
}

