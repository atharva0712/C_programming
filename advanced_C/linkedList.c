#include <stdio.h>

int main() {

    int arr[] = {1.2,2,3,4,5}, i;

    for(i = 0; i<5; i++) {
        printf("%p\n",&arr[i]);
    }
    return 0;
}