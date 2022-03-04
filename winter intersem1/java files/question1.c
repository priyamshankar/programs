#include <stdio.h>
// #include<conio.h>
int main()
{
    // printf("enter the marks here :");
    int marks;
    scanf("%d",&marks);

    if(marks==100){
        printf("Grade A+");
    }
    else if(marks>=90 && marks<100){
        printf("Grade A");
    }
    else if(marks>=80 && marks<90){
        printf("Grade B");
    }
    else if(marks>=70 && marks<80){
        printf("Grade C");
    }
    else if(marks>=60 && marks<70){
        printf("Grade D");
    }
    else if(marks<60 && marks>=0){
        printf("Grade F");
    }
    else{
        printf("invalid input");
    }

    return 0;
}

// output1 
// 55
// grade f

// output 2
// 99 
// grade A

// output 3
// 100
// A+

// output4 
// 101
// invalid input
