#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main() {
  printf("Testing SIGSTOP\n");
  raise(SIGSTOP); // aka Ctrl + z
  

  // in terminal: gcc main.c; ./a.out; ps; kill -s SIGCONT a.out-pid
  printf("I'm back\n\n");
  // in terminal: ps; no longer a.out-pid

  return EXIT_SUCCESS;
} // main
