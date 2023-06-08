#include <stdio.h>

struct students
{
    int rollno;
    char name[30];
    float marks;
};

int main(){
    struct students s[3];
    
    s[0].rollno = 4;
    strcpy(s[0].name, "blade");
    s[0].marks = 4;


    printf("%d %s %f\n",s[0].rollno,s[0].name,s[0].marks);
}
