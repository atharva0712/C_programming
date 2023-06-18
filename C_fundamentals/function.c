#include <stdio.h>

int sum(int a, int b) {
    int c;
    c = a + b;
    printf("%d",c);
}

int main() {
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    return 0;
}