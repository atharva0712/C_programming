#include <stdio.h>
#include <math.h>
int main(){
    float a[50],sum=0,sumstd=0,std,mean,*ptr;
    int i=0,k;

    scanf("%d",&k);
    while(i<k){
        scanf("%f",&a[i]);
        i++;
    }
    ptr = a;
    for(i=0;i<k;i++){
        sum+=a[i];
    }
    mean = sum/k;
    for(i=0;i<k;i++){
        sumstd += pow((*ptr-mean),2);
        ptr++;
    }
    std = sqrt(sumstd/k);

    printf("%f %f %f",sum,mean,std);
    return 0;
}