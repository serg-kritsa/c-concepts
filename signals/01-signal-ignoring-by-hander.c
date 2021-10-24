#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

int main() {
  signal(SIGINT, SIG_IGN); // ignore signal
  while (1);
  
  return EXIT_SUCCESS;
} // main
