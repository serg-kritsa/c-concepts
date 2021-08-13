// location:   inside a function/block
// scope:      within the function/block
// lifetime:   until the function/block completes
#include <stdio.h>


int main(int argc, char *argv[]) {
    auto int x;

    int m;

    scanf("%d", &m);
    {
        int i;
        int n = 5;
        for ( i = m; i < n; i++) {
            // code
        }
    }
    
    return 0;
}

char * myFunc(){
    char x[] = "apple";
    return x;
}

int func_name() {
    auto int y;
    return y;
}