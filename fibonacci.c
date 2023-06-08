#include <stdio.h>

int main() {
    int n, c, i, a = 0, b = 1;
    printf("Enter the number of terms: "); 
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i = 0; i < n-2; i++) {
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    return 0;
}
