#include <stdio.h>

int main() {
    int i;
    
    for(i = 1; i <= 5; i++) {
        printf("*");
        if(i % 2 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
