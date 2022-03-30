#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    printf("please enter integer numbers \n");
    printf("x=");
    scanf("%d",&x);
    printf("please enter float numbers \n");
    printf("y=");
    scanf("%f",&y);
    printf("the sum of 2 numbers is %f \n",x+y);
    printf("the difference between 2 numbers is %f \n", x-y);
    printf("the product of 2 numbers is %f \n",x*y);
    printf("the quotient of 2 numbers is %f \n",x/y);
    return 0;
}
