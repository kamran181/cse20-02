
#include<stdio.h>

int main()
{
    
    struct STUDENT
    {
        char name[20];
        int rollNo;
        int marks;
    }; 
    struct STUDENT studArr[5];
    int i;
    printf("Enter Records of 5 students");
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Name of Student no. %d: ", i + 1);
        scanf(" %[^\n]", studArr[i].name);
        printf("\nEnter Roll no of %s:", studArr[i].name);
        scanf("%d", &studArr[i].rollNo);
        printf("\nEnter marks of %s:", studArr[i].name);
        scanf("%d", &studArr[i].marks);
    } 

    printf("\n Student information List:");
    for (i = 0; i < 5; i++)
        printf("\nName: %s\tRollno: %d\tMarks: %d",studArr[i].name
                            , studArr[i].rollNo, studArr[i].marks);
} 
