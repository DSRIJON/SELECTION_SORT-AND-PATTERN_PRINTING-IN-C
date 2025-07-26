#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int star = a;
    for(int i = 1; i<=a; i++){
        for(int j = i-1; j>=1; j--){
            printf(" ");
        }
        for(int j = star; j>=1; j--){
            printf("*");
        }
        star-=2;
        printf("\n");
    }
    return 0;
}