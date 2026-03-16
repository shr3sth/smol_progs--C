#include<stdio.h>
int main(){
int inp;
printf("how many iterations do you require?\n");
scanf("%d",&inp);
for(int i=0; i<inp;i++)
{
for(int j=1; j < i+2;j++)
{
printf("* ");
}
printf("\n");
}
// This was supposed to end here but I thought it would be better if I added a reverse pattern as well. So here it is!
for(int i=0; i<inp;i++)
{
    for (int j = 1; j < inp-i; j++) // i added the same condition but it didnt work, i wonder why? this one works tho.
    {
        printf("* ");
    }
    printf("\n");
}
return 0;
}
