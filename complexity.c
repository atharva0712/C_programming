#include <stdio.h>

int main(){
    int arr1_size = 5;
    int arr2_size = 3;
    int arr3_size = arr1_size + arr2_size;
    int arr1[3] = {1,12,13},
        arr2[3] = {4,15,16},
        arr3[8],
        arr1_marker = 0,
        arr2_marker = 0,
        k = 0;

    for(k; k < 8; k++) {
        printf("%d ",arr1[arr1_marker]);
        printf("%d \n",arr2[arr2_marker]);
        if(arr1_marker >= arr1_size){
            arr3[k] = arr2[arr2_marker];
            arr2_marker++;
        } else if (arr2_marker > 2) {
            arr3[k] = arr1[arr1_marker];
            arr1_marker++;
        } else if(arr1[arr1_marker] < arr2[arr2_marker]){
            arr3[k] = arr1[arr1_marker];
            arr1_marker++;
        }
        else{
            arr3[k] = arr2[arr2_marker];
            arr2_marker++;
        }

    }
    for(k = 0; k < 8; k++){

        printf("%d ",arr3[k]);
    }
    
}
