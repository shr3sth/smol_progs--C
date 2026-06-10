#include <stdio.h>
#include <math.h>

double sum();
double minus();
double product();
double division();
double exponent();

int main()
{
    int input;

    printf("=== KAKLULATOR ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("Select operation: ");

    scanf("%d", &input);

    switch (input)
    {
    case 1:
        sum();
        break;

    case 2:
        minus();
        break;

    case 3:
        product();
        break;

    case 4:
        division();
        break;

    case 5:
        exponent();
        break;

    default:
        printf("Invalid choice.\n");
    }

    return 0;
}

// ADDITION
double sum()
{
    int n;
    double num, total = 0;

    printf("How many numbers do you want to add? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        total += num;
    }

    printf("Result = %.2lf\n", total);
    return total;
}

// SUBTRACTION
double minus()
{
    double a, b, result;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter second number: ");
    scanf("%lf", &b);

    result = a - b;

    printf("%.2lf - %.2lf = %.2lf\n", a, b, result);

    return result;
}

// MULTIPLICATION
double product()
{
    int n;
    double num, result = 1;

    printf("How many numbers do you want to multiply? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        result *= num;
    }

    printf("Result = %.2lf\n", result);

    return result;
}

// DIVISION
double division()
{
    double dividend, divisor, result;

    printf("Enter dividend: ");
    scanf("%lf", &dividend);

    printf("Enter divisor: ");
    scanf("%lf", &divisor);

    if (divisor == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    result = dividend / divisor;

    printf("%.2lf / %.2lf = %.2lf\n",
           dividend, divisor, result);

    return result;
}

// EXPONENTIATION
double exponent()
{
    double base, power, result;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &power);

    result = pow(base, power);

    printf("%.2lf ^ %.2lf = %.2lf\n",
           base, power, result);

    return result;
}
