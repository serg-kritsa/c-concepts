#include <stdio.h>

int main( ) {
    _Bool must_escape;
    for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 20; i++) {
            for (int i = 0; i < 30; i++) {
                // Loop body executed 10*20*30 times
                // do something useful
                if (must_escape) {
                    goto out;
                }
                
            }
        }
    }
    
    out: // statement following the nested loops
    return 0;
}