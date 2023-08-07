//Topic: 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>

int main()
{
    int english,math,physics,chemistry,phy_he;
    int total_subjects=5,total_marks_obtained=0;
    printf("Enter your marks:\n");
    printf("Enter marks of ENGLISH:");
    scanf("%d",&english);
    printf("Enter marks of MATH:");
    scanf("%d",&math);
    printf("Enter marks of PHYSICS:");
    scanf("%d",&physics);
    printf("Enter marks of CHEMISTRY:");
    scanf("%d",&chemistry);
    printf("Enter marks of PHYSICAL AND HEALTH EDUCATION:");
    scanf("%d",&phy_he);

    if((english>=33) && (math>=33) && (physics>=33) && (chemistry>=33) && (phy_he>=33))
    {
        //total_marks_obtained =english+math+physics+chemistry+phy_he;
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }

 return 0;

}