//switch Case
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
     {
        printf("\nEnter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        printf("Enter operator (+,-,*,/,%%): ");
        scanf(" %c", &op);
        
        switch (op)
        {

        case '+':
        printf("Result is %d\n" , a+b);
        break;

        case '-':
        printf("Result is %d\n" , a-b);
        break;

        case '*':
        printf("Result is %d\n" , a*b);
        break;

        case '/':
        {
            if (b == 0)
            printf("Invalid Number");
            else
            printf("Result is %d\n" , a / b);
            break;
        }

        case '%':
         {
            if (b == 0)
            printf("Invalid Number");
            else
            printf("Result is %d\n" , a%b);
            break;
        }
        default:
        printf("invalid output");
        }
        printf("\n Do You want to continue? (y/n): ");
        scanf(" %c", &choice);
    }
    printf("calculator closed.\n");
    return 0;
}