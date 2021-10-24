#include <stdio.h>
#include <stdlib.h> // EXIT_SUCCESS
#include <unistd.h> // alarm & sleep
#include <signal.h>

int main() {
  alarm(4); // in sec.

  for (int i = 1; i < 10; i++){
    printf("%d\n", i);
    sleep(1); // in sec.
  }

  return EXIT_SUCCESS;
} // main
