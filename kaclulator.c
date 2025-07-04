#include<stdio.h>


double sum();
double minus();
double product();
double division();
double exponent();


int main(){
    int inp;
    printf("select the function you want to perform\n1.SUM\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXPONENTIATION\n");
    scanf("%d", &inp);
    if (inp == 1)
    {
        sum();
    }
    else if (inp == 2)
    {
        minus();
    }
    else if (inp == 3)
    {
        product();
    }
     else if (inp == 4)
    {
        division();
    }
     else if (inp == 5)
    {
       // expo();
    }
    
    else{
        printf("INVALID INPUT");
    } 
    return 0;
}
double sum(){
    double added = 0, dig ;
    printf("Enter the values to be added \n");
    for (int i = 0; i <= 11; i++)
    {
        scanf("%lf",&dig);
        added = added + dig;
        if (dig == 0)
        {
           break;
        }
    }
    printf("%lf", added);
    
    return added;
}
double minus(){
    double a, b, sub; 
    printf("substraction may commence now enter values \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    sub = a - b;
    printf("%lf - %lf = %lf",a,b,sub);
}
double product(){
    double base = 1, mul ;
    printf("Enter the values to be multiplied \n");
    for (int i = 0; i <= 11; i++)
    {
        scanf("%lf", &mul);
        if (mul == 0)
        {
            break;
        }
        else{
        base = (base * mul);}
    }
    printf("%lf", base);
    
    return base;
}
double division(){
double div, dig, Q;
printf("Enter value to be divided\nand then the value to divide with\n");
scanf("%lf %lf", &div, &dig);
Q = div / dig;
printf("%lf / %lf = %lf", div, dig,Q);
return Q;
}
double exponent(){
    return 0;
}