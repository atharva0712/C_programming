#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main() {
    int sd;
    fptr = fopen("prob.txt","w");


    sd=07;
    fprintf(fptr,"%d",sd);

    return 0;
}