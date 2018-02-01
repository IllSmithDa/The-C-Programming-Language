#include <stdio.h>
#include <unistd.h>

// use './test2' for unix; test2 for windows
int main(void) {
  printf("And...\n");
  fork();
  printf("Hello World!\n");
  return 0;
}