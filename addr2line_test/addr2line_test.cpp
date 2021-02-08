// addr2line_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "addr2line.h"

static int line_info(
  unsigned long address,
  unsigned char op_index,
  char *file_name,
  char* section_name,
  char* function_name,
  unsigned int line,
  unsigned int column,
  unsigned int discriminator,
  int end_sequence)
{
    if (address == 0x4e014) { //5b308 13B8C8 4e014
        printf("%s:%d %s  %s\n", file_name, line, section_name ? section_name : "?", function_name ? function_name : "??");
        address = address;
    }
    return 1;
}

int main(int argc, char **argv)
{
    //--e y:\workspace\samoa-MAPS\services\ssl\ssl -j .text  0x5b308
    //resolve_addr(argc, argv);
    //enum_file_addresses(argv[2], line_info);
    enum_file_addresses("y:\\workspace\\samoa-MAPS\\services\\ssl\\ssl", ".text", line_info);
    //enum_file_addresses("y:\\workspace\\samoa-MAPS\\services\\ssl\\ssl", 0, line_info);
    return 0;
}

