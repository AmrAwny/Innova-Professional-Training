#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    char y[4];
    char z[30];
    int b;
    int x;
    float t;
    long c;
    printf("please enter your first name : ");
    scanf("%s",&a);
    printf("Hello MR. %s , can you add your phone number please ? ",a);
    scanf("%ld",&c);
    printf("oki,How old are you ? ");
    scanf("%d",&x);
    printf("oki, nice \n");
    printf("Did you work in such field before? \n");
    scanf("%s",&y);
    printf("if yes ,tell us how many years of experience if no say  0 \n");
    printf("years of experience : ");
    scanf("%f",&t);
    printf("what's the expected salary did you think : ");
    scanf("%d",&b);
    printf("thank you mr.%s we will contact with you in the nearst time",a);

    return 0;
}
