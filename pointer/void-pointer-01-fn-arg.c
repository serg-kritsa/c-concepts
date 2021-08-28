#include <stdio.h>
#include <string.h>

struct POINT {int x; int y;};
void void_ptr_demo();
void void_ptr_as_function_arg();
void fn(void*, char*);

int main() {
    void_ptr_as_function_arg();

    return 0;
}

void fn(void* pData, char* type){
    if (type == "txt") printf("%d \n", strlen(pData));
    else if (type == "struct") printf("%d \n", sizeof(pData));
}
void void_ptr_as_function_arg(){
    char* msg = "Hello";
    fn(msg,"txt"); // fn(&msg,"txt"); will not work correctly
    struct POINT p;
    p.x = 1, p.y = 2;
    fn(&p,"struct");
}