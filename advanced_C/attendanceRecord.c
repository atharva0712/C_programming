#include <stdio.h>

struct attendanceRecord
{
    char* name[20];
    int roll_no;
    char* attendance;
};

int main() {
    struct attendanceRecord student[10];
    int num, i, attend;

    printf("Enter the number of students: ");
    scanf("%d",&num);
    
    for (i = 0; i<num; i++) {
        printf("Enter the details of students %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",student[i].name);
        printf("Enter the Roll Number: ");
        scanf("%d",&student[i].roll_no);
        printf("Press 1 if Present and 2 if absent: ");
        scanf("%d",&attend);
        if (attend == 1) {
            student[i].attendance = "Present";
        }
        else {
            student[i].attendance = "Absent";
        }
        printf("DATA STORED SUCCESFULLY!!\n");
    }
    for (i = 0; i<num; i++) {
        printf("Details of Student %d\n---------------------\n",i+1);
        printf("Name: %s\n",student[i].name);
        printf("Roll Number: %d\n",student[i].roll_no);
        printf("Attendance: %s\n",student[i].attendance);
    }
    return 0;

}
