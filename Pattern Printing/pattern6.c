#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i<= a; i++){
        int star = a*2-i;
        for(int j = 1; j<=i-1; j++){
            printf(" ");
        }
        for(int j = i; j<=star; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}