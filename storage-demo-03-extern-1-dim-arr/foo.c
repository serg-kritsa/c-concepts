
extern char text[]; // no size   // outside function

void foo(void) {
    extern int i; // inside function
    i = 100;
}
