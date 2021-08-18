
// can be outside
// extern int i; // outside function

// void foo(void) {
//     i = 100;
// }

// can be inside
void foo(void) {
    extern int i; // inside function
    i = 100;
}
