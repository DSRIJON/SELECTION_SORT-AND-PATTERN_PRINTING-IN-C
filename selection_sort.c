#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    


    //for ascending
    // for(int i =0; i<a ; i++){
    //     for(int j = i+1; j<a; j++){
    //         if(arr[j] < arr[i]){
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }
    // for(int i = 0; i<a; i++){
    //     printf("%d ",arr[i]);
    // }



    //for descending
    for(int i =0; i<a ; i++){
        for(int j = i+1; j<a; j++){
            if(arr[j] > arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i<a; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}