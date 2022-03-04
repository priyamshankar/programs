#include<stdio.h>
int main(){
    printf("enter the grade: ");
    char grades;
    scanf("%c",&grades);


    switch(grades){
        case 'A':
        printf("Excellent work");
        break;
        case 'a':
        printf("Excellent work");
        break;
        case 'F':
        printf("You failed. Please study more next time");
        break;
        case 'f':
        printf("You failed. Please study more next time");
        break;
        default:
        printf("invalid input");
    }


    return 0;
}