#include<stdio.h>
int main()
{
    int bs;
    float hra,ta,pt,gs,ns;
    printf("Enter a basic salary: ");
    scanf("%d",&bs);
    hra=bs*0.1;
    ta=bs*0.05;
    gs=bs+hra+ta;
    pt=0.02*gs;
    ns=gs-pt;
    printf("Gross salary= %f\n",gs);
    printf("Net salary= %f\n",ns);
    return 0;
}