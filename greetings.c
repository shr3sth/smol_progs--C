#include<stdio.h>


void morning();
void afternoon();
void evening();
void night();

 int main(){
    printf("Enter your name:\n");
    char name[20];
    scanf("%s",name);

    printf("Hello %s!!, what's the time in your loaction?\n:",name);
    int time;
    scanf("%d",&time);
    if (time <= 12)
    {
        morning();
    }
    else if (time > 12 && time <= 16)
    {
        afternoon();
    }
    else if (time > 16 && time <= 20)
    {
        evening();
    }
    else
    {
        night();
    }
    return 0;
 }

void morning(){
    printf("Good Morning / Ohayo\n");
    printf("Have a nice day! / Konnichiwa!\n");
}
void afternoon(){
    printf("Good Afternoon\nDid you have your lunch yet?\n");
}
void evening(){
    printf("Good Evening\n How was your day?\n");
}   
void night(){
    printf("Good Night\n Sleep well!\n");
}
