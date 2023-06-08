#include <stdio.h>
#include <math.h>

int main() {
    float degree, x, sum = 0.0, term, nume, denom;
    int i = 2;

    printf("Enter the value of degree: ");
    scanf("%f", &degree);

    // Convert degree to radians
    x = degree * 3.14159 / 180.0;

    // Compute sine using Taylor series approximation
    nume = x;
    denom = 1.0;
    term = nume / denom;
    sum = term;

    do {
        nume = -nume * x * x;
        denom = denom * i * (i + 1);
        term = nume / denom;
        sum = sum + term;
        i = i + 2;
    } while (term > 0.00001);

    // Print calculated sine value and built-in function value
    printf("sin(%f)=%f without using built-in function\n", degree, sum);
    printf("sin(%f)=%f using built-in function\n", degree, sin(x));

    return 0;
}
