#include <stdio.h>
 
int main() {
    char word[20] = "smarty";
    char word1[20] = "god";
    int i = 0,num = 0,smarty=0;

    while(word[i] != '\0'){
        i++;
    }
    while(word1[num] != '\0') {
        word[i] = word1[num];
        i++;
        num++;
    }
    word[i] = '\0';
    printf("%s",word1);
}