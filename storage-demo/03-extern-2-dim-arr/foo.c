
extern char text[][25]; // 2nd dimention specified   // outside function

void foo(void) {
    extern int i; // inside function
    i = 100;
}