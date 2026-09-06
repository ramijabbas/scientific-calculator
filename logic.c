#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void basic_calculator();
void scientific_calculator();
void trigonometry_calculator();

int main()
{
    int choice;

    while (1)
    {
        printf("\n");
        printf("====================================\n");
        printf("       RAMIJ SCIENTIFIC CALCULATOR\n");
        printf("====================================\n");

        printf("1. Basic Calculator\n");
        printf("2. Scientific Calculator\n");
        printf("3. Trigonometry\n");
        printf("4. Exit\n");

        printf("------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                basic_calculator();
                break;

            case 2:
                scientific_calculator();
                break;

            case 3:
                trigonometry_calculator();
                break;

            case 4:
                printf("\nThank you for using RAMIJ Calculator!\n");
                return 0;

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}



void basic_calculator()
{
    double a, b;
    char op;

    printf("\n--- Basic Calculator ---\n");

    printf("Enter expression (Example: 10 + 5): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;

        case '-':
            printf("Result = %.2lf\n", a - b);
            break;

        case '*':
            printf("Result = %.2lf\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Error: Cannot divide by zero!\n");
            else
                printf("Result = %.2lf\n", a / b);
            break;

        default:
            printf("Invalid operator!\n");
    }
}



// SCIENTIFIC CALCULATOR


void scientific_calculator()
{
    int choice;
    double number, number2;

    printf("\n--- Scientific Calculator ---\n");

    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Square Root\n");
    printf("4. Power\n");
    printf("5. Logarithm\n");
    printf("6. Natural Logarithm\n");
    printf("7. Absolute Value\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter number: ");
            scanf("%lf", &number);

            printf("Result = %.4lf\n", number * number);
            break;

        case 2:
            printf("Enter number: ");
            scanf("%lf", &number);

            printf("Result = %.4lf\n", number * number * number);
            break;

        case 3:
            printf("Enter number: ");
            scanf("%lf", &number);

            if (number < 0)
                printf("Error: Negative number!\n");
            else
                printf("Result = %.4lf\n", sqrt(number));

            break;

        case 4:
            printf("Enter base: ");
            scanf("%lf", &number);

            printf("Enter exponent: ");
            scanf("%lf", &number2);

            printf("Result = %.4lf\n", pow(number, number2));
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &number);

            if (number <= 0)
                printf("Error: Number must be positive!\n");
            else
                printf("Result = %.4lf\n", log10(number));

            break;

        case 6:
            printf("Enter number: ");
            scanf("%lf", &number);

            if (number <= 0)
                printf("Error: Number must be positive!\n");
            else
                printf("Result = %.4lf\n", log(number));

            break;

        case 7:
            printf("Enter number: ");
            scanf("%lf", &number);

            printf("Result = %.4lf\n", fabs(number));
            break;

        default:
            printf("Invalid choice!\n");
    }
}



// TRIGONOMETRY


void trigonometry_calculator()
{
    int choice;
    double degree;
    double radian;

    printf("\n--- Trigonometry ---\n");

    printf("1. Sin\n");
    printf("2. Cos\n");
    printf("3. Tan\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter angle in degrees: ");
    scanf("%lf", &degree);

    // Convert degree to radian
    radian = degree * PI / 180.0;

    switch (choice)
    {
        case 1:
            printf("sin(%.2lf) = %.4lf\n",
                   degree, sin(radian));
            break;

        case 2:
            printf("cos(%.2lf) = %.4lf\n",
                   degree, cos(radian));
            break;

        case 3:
            printf("tan(%.2lf) = %.4lf\n",
                   degree, tan(radian));
            break;

        default:
            printf("Invalid choice!\n");
    }
}