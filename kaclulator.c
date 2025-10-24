#include<stdio.h>

double sum();
double minus();
double product();
double division();
double exponent();

int main(){
    int input;
    printf("select the function you want to perform\n1.SUM\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXPONENTIATION\n");
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
       printf("Invalid choice. Please select 1, 2, 3, or 4 ect.\n");
       return -1;
    }
    return 0;
}

//SUM FUNCTION
double sum(){
    double added = 0, dig ;
    printf("Enter the values to be added \n");
    for (int i = 0; i <= 11; i++)
    {
        scanf("%lf\n",&dig);
        added = added + dig;
        if (dig == 0)
        {
           break;
        }
    }
    printf("%lf\n", added);
    
    return added;
}

// SUBTRACTION FUNCTION
double minus(){
    double a, b, sub; 
    printf("substraction may commence now enter values \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    sub = a - b;
    printf("%lf - %lf = %lf\n",a,b,sub);
}

// PRODUCT FUNCTION
double product(){
    double base = 1, mul ;
    printf("Enter the values to be multiplied \n");
    for (int i = 0; i <= 11; i++)
    {
        scanf("%lf\n", &mul);
        if (mul == 0)
        {
            break;
        }
        else{
        base = (base * mul);}
    }
    printf("%lf\n", base);
    
    return base;
}

// DIVIDE FUNCTION
double division(){
double div, dig, Q;
printf("Enter value to be divided\nand then the value to divide with\n");
scanf("%lf %lf\n", &div, &dig);
Q = div / dig;
printf("%lf / %lf = %lf\n", div, dig,Q);
return Q;
}

// EXPONENT OR POWER FUNCTION
double exponent(){
    return 0;
}

