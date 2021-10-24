#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void handler_dividedbyzero(int signum);

void set_signal_handler_demo(){
  // // typedef void (*_sig_func_ptr)(int);
  // // #define SIG_ERR ((_sig_func_ptr)-1)   // // printf("=== %d \n", SIG_ERR); // -1
  // pointers are unsigned -> can be negative
  // // _sig_func_ptr signal(int, _sig_func_ptr)
  void (*sigHandlerReturn)(int);
  sigHandlerReturn = signal(SIGFPE, handler_dividedbyzero);
  if(sigHandlerReturn == SIG_ERR){
    perror("Signal Error: ");
    return 1;
  }
}
void set_signal_handler_shorthand_demo(){
  if(signal(SIGFPE, handler_dividedbyzero) == SIG_ERR){
    perror("Setting Signal Error ");
    return 1;
  }
}

int main() {
  // set_signal_handler_demo();
  set_signal_handler_shorthand_demo();

  int result = 0;
  int v1 = 0, v2 = 0;
  v1 = 121;
  v2 = 0;
  result = v1/v2;
  printf("Result %d \n", result);
  return 0;
}

void handler_dividedbyzero(int signum){
  if(signum == SIGFPE){
    printf("Received SIGFPE, Divide by Zero Exception \n");        
    exit(0);
  }
  else printf("Received %d Signal \n", signum);
  return;
}

// #include <signal.h>
// #include <stdio.h>
// #include <stdlib.h>

// static void catch_function(int signal) {
//     puts("Interactive attention signal caught.");
// }

// int main(void) {
//     if (signal(SIGINT, catch_function) == SIG_ERR) {
//         fputs("An error occurred while setting a signal handler.\n", stderr);
//         return EXIT_FAILURE;
//     }
//     puts("Raising the interactive attention signal.");
//     if (raise(SIGINT) != 0) {
//         fputs("Error raising the signal.\n", stderr);
//         return EXIT_FAILURE;
//     }
//     puts("Exiting.");
//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <signal.h>
 
// void signal_handler(int signal)
// {
//     printf("Received signal %d\n", signal);
// }
 
// int main(void)
// {
//     /* Install a signal handler. */
//     if (signal(SIGTERM, signal_handler) == SIG_ERR)
//     {
//         printf("Error while installing a signal handler.\n");
//         exit(EXIT_FAILURE);
//     }
 
//     printf("Sending signal %d\n", SIGTERM);
//     if (raise(SIGTERM) != 0)
//     {
//         printf("Error while raising the SIGTERM signal.\n");
//         exit(EXIT_FAILURE);
//     }
 
//     printf("Exit main()\n");
//     return EXIT_SUCCESS;
// }