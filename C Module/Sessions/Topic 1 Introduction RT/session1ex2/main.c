#include <stdio.h>
#include <stdlib.h>

int main()
{
int current_day,current_month,birth_day,birth_month,d,m;
int current_year,birth_year,y;
printf("please enter the current date \n");
printf("enter the day :");
scanf("%d",&current_day);
printf("enter the month :");
scanf("%d",&current_month);
printf("enter the year :");
scanf("%d",&current_year);
printf("please enter the date of birth \n");
printf("enter the day :");
scanf("%d", &birth_day);
printf("enter the month :");
scanf("%d",&birth_month);
printf("enter the year :");
scanf("%d",&birth_year);
if(birth_day>current_day)
    {
    current_month=current_month-1;
    current_day=current_day+30;
    }
    if(birth_month>current_month)
    {
    current_year=current_year-1;
    current_month=current_month+12;
    }
    if(birth_year>current_year)
    {
    printf("there is an error in entering the current year");
    }
    d=current_day-birth_day;
    m=current_month-birth_month;
    y=current_year-birth_year;
    printf("current age is \n");
    printf("day : %d \n",d);
    printf("month : %d \n",m);
    printf("year : %d \n",y);
	return 0;
}
