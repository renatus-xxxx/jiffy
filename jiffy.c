#include <stdio.h>

#define JIFFY 0xfc9e

int main(int argc, char* argv[]) {
  unsigned int* p_timer = (unsigned int*)JIFFY;
  printf("system timer - %d \n",(*p_timer));
  return 0;
}