#include<stdio.h>
int add(int a,int b);
int main()
{
    int a,b,res;
    printf("Enter the two numbers:-  ");
    scanf("%d%d",&a,&b);
    res = add(a , b );
    printf("sum is :-  %d",res);
    return 0 ;

}
int add(int a,int b){
int c;
c=a+b;
return c;


}
