#include<stdio.h>
#include<math.h>
int main()
{
 float a[10];
 int n,i,num;
 float mean,dev,sum=0,sum2=0,var;
 float *ptr=a;
 printf("Enter the number of elements in the array\n");
 scanf("%d",&n);
 printf("Enter the elements in the array\n");
 for(i=0;i<n;i++)
 {
 scanf("%f",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 sum=sum+*ptr;
 ptr++;
 }
 mean = sum/n;
 for(i=0;i<n;i++)
 {
 num = sum + pow((*ptr - mean), 2);
 }
 var = num/n;
 dev = sqrt(var);
 printf("Sum is %.2f\nMean is %.2f\nStandard deviation is %.2f",sum,mean,dev);
 return 0;
}