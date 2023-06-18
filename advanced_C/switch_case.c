#include <stdio.h>

int fibonacci(int n);
int reverse(int n);
int factorial(int n);

int main() {

    int option,n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter option number: ");
    scanf("%d",&option);
    switch (option) {
    case 1:
        fibonacci(n);
        break;
    case 2:
        reverse(n);
        break;
    case 3:
        factorial(n);
        break;
    
    default:
        break;
    }
    return 0;
}

int fibonacci(int n) {
    int c, i, a = 0, b = 1;
    printf("%d\n%d\n",a,b);
    for(i = 0; i < n-2; i++) {
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
}
int reverse(int n) {
    while(n != 0) {
        printf("%d",n%10);
        n = n/10;
    }
}
int factorial(int n) {
    int fa = 1;
    for(n; n>0; n--) {
        fa *= n;
    }
    printf("%d",fa);
}