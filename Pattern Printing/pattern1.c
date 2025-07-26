#include <stdio.h>

int main() {
    /* * * * * 
     * * *
     * *
     *  */
    int a;
    scanf("%d",&a);
    for(int i = 1; i<= a; i++){ // for line printing
        for(int j = i; j>=1; j--){ //for stars printing 
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}