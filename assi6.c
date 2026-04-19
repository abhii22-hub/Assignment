#include<stdio.h>

int factorial_recursive(int n)
 {
    if (n==0||n==1)
     return 1;
    else
     return n* factorial_recursive(n-1);
 }

int factorial_iterative (int n)
 {
    int i,fact=1;
    for (i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact ; 
 }
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Invalid input!factorial is not defined for negative number.\n");
    }
    else
    {
        printf("factorial using iterative method:  ""%d",factorial_iterative(n));
        printf(" factorial using recursive method:  ""%d",factorial_recursive(n));
    }
    return 0;
}