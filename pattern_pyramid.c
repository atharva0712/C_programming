#include <stdio.h>
int main(){
    int i,j,rows,k;
    scanf("%d",&rows);

    for(i=0;i<rows;i++){
        for(j=0;j<rows-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}