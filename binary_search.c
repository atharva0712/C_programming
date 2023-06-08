#include <stdio.h>

int main(){
    int high,low=0,num,i=0,mid,find,flag=0;
    printf("enter the number of elements\n");
    scanf("%d",&num);
    int arr[num];
    printf("enter the elements\n");
    while(i<num) {
        scanf("%d",&arr[i]);
        i++;
    }
    high = num - 1;
    printf("enter the key to be searched\n");
    scanf("%d",&find); 
    while(low <= high) {
        mid = (low + high)/2;
        if(arr[mid] == find){
            flag = 1;
            break;
        }
        else if(arr[mid]>find){
            low = mid + 1;
        }
        else if(arr[mid]<find){
            high = mid - 1;
        }
    }
    if(flag == 0){
        printf("number is not present");
    }
    else{
        printf("the key is present at the index %d",mid);
    }
    return 0;
}