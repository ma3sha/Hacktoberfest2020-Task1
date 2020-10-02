#include <stdio.h>

int main()
{
    char name[20],country[10],skill[1];
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : \n");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residance : \n");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : \n");//Get user Age
    scanf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : \n");//Get user skill level
    scanf("%s",&skill);
    printf("Thank you %s Happy Hacking",name);//Thank the user

    return 0;
}
