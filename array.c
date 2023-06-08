#include <stdio.h>

int main () {
    int arr[10], len, j = 0,i = 0, sum = 0, average = 0;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    printf("Enter the elements of the array:\n");
    for(j = 0; j<len; j++) {
        scanf("%d",&arr[j]);
    }
    while(i < len) {
        sum += arr[i];
        i++;
    }
    printf("%d is the sum\n",sum);
    printf("%d is the average",sum/len);
}