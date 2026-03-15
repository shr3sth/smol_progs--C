#include<stdio.h>
int main(){
  int age = 18;
  int *ptr = &age;
  int _age = *ptr;
   printf("1. %p\n", (void *)ptr);  // address of the variable the pointer is pointing at.
   printf("2. %p\n", &age);    // Address of age variable
   printf("3. %p \n", &ptr);    // address of ptr variable IMPPPP this one is the only one different 
   printf("4. %d\n", *ptr);       // value stored in the variable to which the pointer is pointing to.
   printf("5. %p\n", ptr);  // value stored in ptr variable, that is the address of age variable
   printf("6. %d\n", age);   // value storeed in age vairable 
   printf("7. %d\n", *(&age));   // value at the specified address: age 
   printf("8. %p", *(&ptr));   // value at specified address: ptr 
  return 0;
}
