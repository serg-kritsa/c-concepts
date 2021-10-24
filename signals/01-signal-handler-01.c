#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>

void signalHandler(int signalValue);

int main() {
  int i; // loop counter
  int x; // random value holder
  
  signal(SIGINT, signalHandler);
  srand(clock());

  for (size_t i = 0; i < 100; i++){
    x = 1 + rand() % 50;
    if (x == 25){
      raise(SIGINT);
    }
    printf("%4d", i);
    if (i % 10 == 0){
      printf("\n");
    }
  } // for

  return EXIT_SUCCESS;
} // main

void signalHandler(int signalValue){
  int response; // 1 OR 2
  printf("%s%d%s\n%s", "\nInterrupt signal (", signalValue, " ) received.", "Do you wish to continue ( 1 = yes or 2 = no )");
  scanf("%d", &response);

  while (response != 1 && response != 2){
    printf("( 1 = yes or 2 = no ) ? ");
    scanf("%d", &response);
  } // while

  if(response == 1){
    signal(SIGINT, signalHandler); // register handler for signal
  }
  else{
    exit( EXIT_SUCCESS);
  }
} // signalHandler