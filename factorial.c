// WITHOUT USING RECURSION--->
/* 
#include<stdio.h>
int factorial(int n);
int main(){
  int n;
  printf("FACTORIAL OF? ");
  scanf("%d",&n );
  printf("Factorial is %d", factorial(n));
  return 0;
}
int factorial(int n){
  if (n == 0)
  {
    return 1;
  }
  int factorialNm1 = factorial(n - 1);
 int factorialN = n * factorialNm1;
 return factorialN;
}
*/


 // FUNCTIONS TO CALCULATE THE FACTORIAL OF USER INPUT IN TWO DIFFERENT APPROACH 
 // USING RECURSION IN THIS ONE---->
#include<stdio.h>
int factorial(int n);
int main(){
  int n;
  printf("ENTER THE DIGIT ");
  scanf("%d", &n);
  printf("The factorial of the given number is %d", factorial(n));
}
int factorial(int n){
  if (n == 0 ||n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
