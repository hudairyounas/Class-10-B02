#include <stdio.h>

void main()
{

    // int num1;
    // printf("Enter first number: ");
    // scanf("%d", &num1);
    // char operator;
    // printf("Enter operator: ");
    // scanf(" %c", &operator);
    // int num2;
    // printf("Enter second number: ");
    // scanf("%d", &num2);

    // if (operator == '*')
    // {
    //     printf("\n%d", num1 * num2);
    // }
    // else if (operator == '/')
    // {
    //     if (num2 != 0)
    //     {
    //         printf("\n%d", num1 / num2);
    //     }
    //     else
    //     {
    //         printf("\nPrint Enter a valid number");
    //     }
    // }
    // else if (operator == '+')
    // {
    //     printf("\n%d", num1 + num2);
    // }
    // else if (operator == '-')
    // {
    //     printf("\n%d", num1 - num2);
    // }
    // else
    // {
    //     printf("\nPlease Enter a valid operator");
    // }

    // int number = 34;

    // if (number > 0)
    // {
    //     if (number % 2 == 0)
    //     {
    //         printf("Number is even");
    //     }
    //     else
    //     {
    //         printf("Number is odd");
    //     }
    // }
    // else if (number < 0)
    // {
    //     printf("Number is negative");
    // }
    // else
    // {
    //     printf("Number is zero 0");
    // }

    float matric_marks_obtained = 60;
    float intermediate_ICS = 65;
    float entrance_test_marks = 65;

    if (matric_marks_obtained >= 60 && intermediate_ICS >= 65 && entrance_test_marks >= 65)
    {
        printf("You are eligible for admission in an this university");
    }
    else if (matric_marks_obtained < 60)
    {
        printf("You are not eligible for admission in this university\nYour matric marks is less than 60%");
    }
    else if (intermediate_ICS < 65)
    {
        printf("You are not eligible for admission in this university\nYour intermediate marks is less than 65%");
    }
    else if (entrance_test_marks < 65)
    {
        printf("You are not eligible for admission in this university\nYour intermediate marks is less than 65%");
    }
}