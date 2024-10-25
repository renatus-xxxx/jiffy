#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define JIFFY 0xfc9e

int is_num(const char* str) {
  while (*str) {
    if (!isdigit(*str)) {
      return 0; // Not a number
    }
    str++;
  }
  return 1;
}

int main(int argc, char* argv[]) {
  unsigned int* p_timer = (unsigned int*)JIFFY;
  if (argc > 1) {
    if (is_num(argv[1])) {
      unsigned int value = atoi(argv[1]);
      *p_timer = value;
      printf("new system timer value set: %d\n", value);
    } else {
      printf("usage: jiffy [0-65535]\n", argv[0]);
      return 1;
    }
  } else {
    printf("system timer - %d \n", (*p_timer));
  }

  return 0;
}