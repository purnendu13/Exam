#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
    char branch[5];
    char sec[2];
};
int main()
    {
        int n;
        printf("enter the no of students to be stored:-\n");
        scanf("%d",&n);
        struct student s[n];
        for(int i=0;i<n;i++)
        {
         printf("enter the details of the student:-\n");
         printf("name:-");
         scanf("%s",&s[i].name);
         printf("roll no.:-");
         scanf("%d",&s[i].roll);
         printf("cgpa:-");
         scanf("%f",&s[i].cgpa);
         printf("branch:-");
         scanf("%s",&s[i].branch);
         printf("sec:-");
         scanf("%s",&s[i].sec);
        }

        for(int i=0;i<n;i++)
        {
            printf("details of student %d is:- \n",i+1);
            printf("name=%s ",s[i].name);
            printf("Roll no.:-%d ",s[i].roll);
            printf("cgpa:-%f ",s[i].cgpa);
            printf("branch:-%s ",s[i].branch);
            printf("section=%s",s[i].sec);
            printf("\n");
        }
    return 0;
    }