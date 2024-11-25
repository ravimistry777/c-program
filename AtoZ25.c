#include <stdio.h>

int main() {
    int num = 65;

    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) { 
            printf("%2c", num++); 
        }
        printf("\n");
    }

    return 0;
}
