#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,i;
    printf("Enter how many random numbers you want: ");
    scanf("%d",&n);
    srand(time(0));
    for(i=0;i<=n;i++)
    {
        printf("%d\n",rand());
    }
    return 0;
}