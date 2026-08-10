
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define note "Please enter valid input values for the operations."
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void square_root();

int main()
{
printf("\t\tWelcome to the Scientific Calculator\n\n");
int choice;
printf ("***** Press 0 to quit the process *****\n");
printf("Enter 1 for Addition\n");
printf("Enter 2 for Subtraction\n");
printf("Enter 3 for Multiplication\n");
printf("Enter 4 for Division\n");
printf("Enter 5 for Modulus\n");
printf("Enter 6 for Factorial\n");
printf("Enter 7 for Power\n");
printf("Enter 8 for Square\n");
printf("Enter 9 for Cube\n");
printf("Enter 10 for Square Root\n");

while(1)
{
    printf("\n\nEnter the operation you want to perform:");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        modulus();
        break;
    case 6:
        factorial();
        break;
    case 7:
        power();
        break;
    case 8:
        square();
        break;
    case 9:
        cube();
        break;
    case 10:
        square_root();
        break;
    case 0:
        exit(0);
    default:
        printf("Invalid choice!\n");
}
}
return 0;
}

void addition()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("The sum of a and b is %.2lf\n", a + b);
}

void subtraction()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("The difference between a and b is %.2lf\n", a - b);
}

void multiplication()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("The product of a and b is %.2lf\n", a * b);
}

void division()
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("The quotient of a and b is %.2lf\n", a / b);
    else
        printf("Error! Division by zero.\n");
}

void modulus()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(b != 0)
        printf("The modulus of a and b is %d\n", a % b);
    else
        printf("Error! Division by zero.\n");
}

void factorial()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
    {
        for(i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("The factorial of %d is %llu\n", n, fact);
    }
}

void power()
{
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, pow(base, exponent));
}

void square()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("The square of %.2lf is %.2lf\n", num, num * num);
}

void cube()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    printf("The cube of %.2lf is %.2lf\n", num, num * num * num);
}

void square_root()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if(num < 0)
        printf("Error! Square root of a negative number doesn't exist.\n");
    else
        printf("The square root of %.2lf is %.2lf\n", num, sqrt(num));
}
