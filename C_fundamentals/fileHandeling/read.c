#include <stdio.h>
#include <stdlib.h>

FILE *fptr;

int main() {
    char* sd = "mitochondria is the power house of of the cell\n";
    fptr = fopen("prob.txt","a");

    fprintf(fptr,"%s",sd);

    return 0;
}