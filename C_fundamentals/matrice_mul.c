#include <stdio.h>
#include <string.h>
int main() {
    char string[20];
    int i, len, flag = 0;
    len = strlen(string);
    scanf("%d",&string);

    for (i = 0; i<len; i++) {
        if (string[i] == string[len-i-1]) {
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("not pallindrome");
    }
    else {
        printf("palindrome");
    }
    
}
