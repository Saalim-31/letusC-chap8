#include<stdio.h>
int lpyear(int);
int main()
{
    int year,res;
    printf("Enter the year :- ");
    scanf("%d",&year);
    res=lpyear(year);
    printf("%d is %d",year,res);
    return 0;

}
int lpyear(year)
{
    int saal;
    if (saal%100==0)

        if (saal%400==0)
            printf("Leap year");
        else
            printf("Not a leap year");

    if (saal%4==0)
       {
           printf("Leap year");}
    else
        printf("Not leap year");
      return saal;
}
