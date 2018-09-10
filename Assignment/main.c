#include <stdio.h>

int main(void)
{
    char operator;
    int num1, num2;

    printf("Enter an operator (+,-,*,/,%,<,>,&,|,^,~):");
    scanf("%c", &operator);

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    switch(operator)
    {
        case '+': //Addition
            printf("%d + %d = %d",num1, num2, num1 + num2);
                   break;
        case '-'://Subtraction
            printf("%d - %d = %d",num1, num2, num1 - num2);
                   break;
        case '*'://Multiplication
            printf("%d * %d = %d",num1, num2, num1 * num2);
                   break;
        case '/'://Division
            printf("%d / %d = %d",num1, num2, num1 / num2);
                   break;
        case '%'://Modulus
            printf("%d % %d = %d",num1, num2, num1 % num2);
                   break;
        case '<'://Left Shift
            printf("%d << %d = %d",num1, num2, num1 * num2);
                   break;
        case '>'://Right Shift
            printf("%d >> %d = %d",num1, num2, num1 / num2);
                   break;
        case '&'://Bitwise AND
            printf("%d & %d = %d",num1, num2, num1 * num2);
                   break;
        case '|'://Bitwise OR
            printf("%d | %d = %d",num1, num2, num1 + num2);
                   break;
        case '^'://Bitwise XOR
            printf("%d ^ %d = %d",num1, num2, num1 ^ num2);
                   break;
        case '~'://Bitwise Inverse
            printf("%d ~ = %d",num1, ~num1);
                   break;
        default:  // operator doesn't match any case constant
            printf("Error! operator is not correct");
    }
    return 0;
}
