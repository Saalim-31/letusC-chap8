#include<stdio.h> //program for checking whether the year is leap or not
int lpyear(int);
int main()
{
    int year;
    printf("Enter the year :- ");
    scanf("%d",&year);
    if (lpyear(year))
        printf("Year %d is a leap year ",year);
    else
        printf("Year %d is not a leap year",year);
    return 0;
}
int lpyear(int year)
{
    if (year%4==0||year%400==0&&year%100!=0)

        return 1;//return true or false
    else
        return 0;
}

