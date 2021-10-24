#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main() {
  printf("Testing SIGSTOP\n");
  raise(SIGSTOP); // Ctrl + z
  
  return EXIT_SUCCESS;
} // main
