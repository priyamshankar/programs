#include <stdio.h>

int main()
{
    // printf("hello priyam kuch bhi");
    // printf("enter the marks here :");

    int dabba1;
    int dabba3;
    char dabba2;
    float dabba4;
    dabba4 = 77.56;
    dabba1 = 56;
    dabba1 = 45;
    dabba3 = 56;

    dabba2 = 'p';

    //scanf("%d",&dabba1);
    // printf("the value of dabba1 is:%d", dabba1);
    // printf("\nthe value of dabba3 is:%d", dabba3);

    int addDabba;
    addDabba = dabba1 + dabba3;
    // printf("\nthe value of sum of dabba is:%d", addDabba);
    int marks;
    marks = 1;
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("\nsabbash padhnuk vidyarthi ho");
    }
    else if (marks >= 30 && marks < 90)
    {
        printf("thora aur accha karo");
    }
    else if (marks < 30 && marks >= 0)
    {
        printf("burbake ho kya ekdm se");
    }
    // else
    // {
    //     printf("invalid input");
    // }

    printf("\nme yaha hu");

    
    return 0;
}