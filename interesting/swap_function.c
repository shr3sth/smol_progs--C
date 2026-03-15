// Swaps the values of two integers!

#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    y = x ^ y;
    x = x ^ y;
    y = x ^ y;
    printf("After swapping(Using XOR): x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping(Using function): x = %d, y = %d\n", x, y);
    printf("\n The values of x and y are swapped back to original values using the swap function.\n");
    return 0;
}
/* this was awesome! 
I think this was this was the first program that does noting! 
I mean it does something but we finally get to the original values that we started with!
*/
