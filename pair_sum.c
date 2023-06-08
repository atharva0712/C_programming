#include <stdio.h>

int main() {
    int array_size = 7;
    int sum = 9,
    k = 0,
    j = 0;
    int arr[7] = {4,6,3,7,5,2,8};


    for(k; k < array_size; k++){
        j = k;
        for(j; j < array_size; j++){
            if(arr[k] != arr[j]) {
                if(arr[k] + arr[j] == sum){
                    printf("%d %d\n",arr[k],arr[j]);
                }
            }
        }
    }
    return 0;
}