#include <stdio.h>

int sum(int *b, int *c) {
    int sum;
    sum = *b + *c;
    return sum;
}

int main() {
    int b = 5, c = 4;
        printf("%d",sum(&b, &c));
    return 0; 
}